#include "test.h"

// removing ft_print_memory drastically reduces funcheck (from ~800 to <80)

static void ft_resetdest50()
{
	char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz#aBcDeFgHiJkLmNoPqRsTuVwXyZ|";

	ft_memset(dest50, 0, 50);
	ft_memcpy(dest50, str, 50);
}

static void test_bzero(void *ptr, size_t n)
{
	unsigned int mem = ft_calcprtmem(n);

	ft_resetdest50();
	ft_print_memory(ptr, mem);
	printf("testing BZERO with addr %p, n %lu\n", ptr, n);
	ft_bzero(ptr, n);
	printf("FT_BZERO\n");
	ft_print_memory(ptr, mem);
	bzero(ptr, n);
	printf("OG_BZERO\n");
	ft_print_memory(ptr, mem);
	prt_separation_test();
}

static void test_memset(void *ptr, int c, size_t n)
{
	unsigned int mem = ft_calcprtmem(n);

	ft_print_memory(ptr, mem);
	printf("testing MEMSET with addr %p, char '%c', n %lu\n", ptr, c, n);
	ft_memset(ptr, c, n);
	printf("FT_MEMSET\n");
	ft_print_memory(ptr, mem);
	memset(ptr, c, n);
	printf("OG_MEMSET\n");
	ft_print_memory(ptr, mem);
	prt_separation_test();
}

static void test_memchr(const void *ptr, int c, size_t n)
{
	unsigned int mem = ft_calcprtmem(n);
	void *p = (void *) ptr;

	ft_print_memory(p, mem);
	printf("testing MEMCHR with addr %p, char '%c', n %lu\n", ptr, c, n); 
	printf("FT_MEMCHR: found '%c' at %p\n", c, ft_memchr(ptr, c, n));
	printf("OG_MEMCHR: found '%c' at %p\n", c, memchr(ptr, c, n));
	prt_separation_test();
}

static void test_memcmp(const void *s1, const void *s2, size_t n)
{
	printf("testing MEMCMP with s1 \"%s\", s2 \"%s\", n %lu\n", (char *) s1, (char *) s2, n);
	printf("FT_MEMCMP: diff = %i\n", ft_memcmp(s1, s2, n));
	printf("OG_MEMCMP: diff = %i\n", memcmp(s1, s2, n));
}

static void test_memcpy(void *dft, void *dog, const void *src, size_t n)
{
	unsigned int mem = ft_calcprtmem(n);
	void *pft, *pog;
	memset(dest50,0,50);
	memset(dorg50,0,50);
	printf("testing MEMCPY with src \"%s\", dst_ft %p, dst_og %p, n %lu\n", (char*) src, dft, dog, n);
	pft = ft_memcpy(dft, src, n);
	printf("FT_MEMCPY: %p %s\n", pft, (char *) pft);
	ft_print_memory(dft, mem);
	pog = memcpy(dog, src, n);
	printf("OG_MEMCPY: %p %s\n", pog, (char *) pog);
	ft_print_memory(dog, mem);
	prt_separation_test();
}

static void test_memmove(char *src, char *dst, size_t n)
{
	unsigned int mem = ft_calcprtmem(n);

	if (dst)
		ft_resetdest50();
	if (src && n > ft_strlen(src))
	{
		printf("MEMMOVE n too large\n");
		return ;
	}
	printf("testing MEMMOVE with src%p, dst%p, n %zu\n", src, dst, n);
	ft_print_memory(src, mem);
	ft_print_memory(dst, mem);
	printf("FT_MEMMOVE: return %p\n",ft_memmove(dst, src, n));
	ft_print_memory(src, mem);
	ft_print_memory(dst, mem);
	if (dst)
		ft_resetdest50();
	printf("OG_MEMMOVE: return %p\n",memmove(dst, src, n));
	ft_print_memory(src, mem);
	ft_print_memory(dst, mem);
	prt_separation_test();
}

void test_memory()
{
	// BZERO
	prt_seperation_group();
	test_bzero(NULL, 0); // passes
	//test_bzero(NULL, 8); // FT & OG crash
	test_bzero((void *) dest50, 8);
	test_bzero((void *) dest50, 0);
	// MEMSET
	prt_seperation_group();
	test_memset(&integer, 0, 4);
	test_memset(NULL, 2, 0);
	//test_memset(NULL, 2, 2); // FT & OG crash
	// MEMCHR
	prt_seperation_group();
	string = "asdfjkuiolkjeu";
	test_memchr(string, 'u', 20);
	test_memchr(string, 'u', 0);
	// test_memchr(NULL, 'c', 2); // can also not be handled by OG
	test_memchr(NULL, 'c', 0);
	test_memchr(string, 0, 3);
	test_memchr(string, 0, 30);
	test_memchr(string, 'x', 10);
	test_memchr(string, 'x', 10);
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	test_memchr((void*) tab, -1, 5);
	// MEMCMP
	string2 = "asdfjklö";
	prt_seperation_group();
	test_memcmp((const void*) string, (const void *) string2, 10);
	test_memcmp((const void*) string, (const void *) string2, 0);
	test_memcmp((const void*) string, (const void *) string2, -10);
	test_memcmp("", (const void *) string2, 10);
	test_memcmp((const void*) string, "", 10);
	string = "bla\0\0\t\vblub";
	string2 = "bla\0\0\t\rblub";
	printf("next strings are: \"bla\\0\\0\\t\\vblub\" & \"bla\\0\\0\\t\\rblub\"\n");
	test_memcmp((const void*) string, (const void *) string2, 15);
	// test_memcmp((const void*) string, NULL, 2);	// NULL causes segvault in FT & OG
	// test_memcmp(NULL, (const void*) string, 2);	// NULL causes segvault in FT & OG
	// test_memcmp(NULL, NULL, 2);	// both NULL causes segvault in FT & OG
	// MEMCPY
	prt_seperation_group();
	string = "do. or do not.";
	//test_memcpy(dest50, dorg50, string, 14000000); // len > src content crashes OG too
	test_memcpy(dest50, dorg50, "", 14);
	test_memcpy(dest50, dorg50, string, 0);
	test_memcpy(dest50, dorg50, string, 14);
	test_memcpy(dest50, dorg50, dest50, 14);
	test_memcpy(dest50, dorg50, dorg50, 14);
	//test_memcpy(NULL, NULL, string, 10); // causes segvault in FT & OG
	//test_memcpy(dest50, dorg50, NULL, 20); // causes segvault in FT & OG
	test_memcpy(NULL, NULL, NULL, 0);
	//test_memcpy(NULL, NULL, NULL, 2); // this is supposed to crash
	// MEMMOVE
	prt_seperation_group();
	memset(dest50, 0, 50);
	memset(dorg50, 0, 50);
	test_memmove(dest50, &dest50[20], 10);
	test_memmove(dest50, &dest50[5], 12);
	test_memmove(dest50, &dest50[1], 0);
	test_memmove(&dest50[5], &dest50[20], 5);
	test_memmove(&dest50[5], dest50, 4);
	test_memmove(&dest50[5], dest50, 12);
	test_memmove(&dest50[5], dest50, 0);
	//test_memmove(NULL, &dest50[5], 6);	// dst or src NULL causes segvault with OG and FT
	test_memmove(NULL, NULL, 0);
	//test_memmove(NULL, NULL, 5);
}

void fun_memory()
{
	// BZERO
	prt_seperation_group();
	test_bzero((void *) dest50, 8);
	// MEMSET
	prt_seperation_group();
	test_memset(&integer, 0, 4);
	// MEMCHR
	prt_seperation_group();
	string = "asdfjkuiolkjeu";
	test_memchr(string, 'u', 20);
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	test_memchr((void*) tab, -1, 5);
	// MEMCMP
	string2 = "asdfjklö";
	prt_seperation_group();
	test_memcmp((const void*) string, (const void *) string2, 10);
	string = "bla\0\0\t\vblub";
	string2 = "bla\0\0\t\rblub";
	printf("next strings are: \"bla\\0\\0\\t\\vblub\" & \"bla\\0\\0\\t\\rblub\"\n");
	test_memcmp((const void*) string, (const void *) string2, 15);
	// MEMCPY
	prt_seperation_group();
	string = "do. or do not.";
	memset(dest50,0,50);
	memset(dorg50,1,50);
	test_memcpy(dest50, dorg50, string, 14);
	// MEMMOVE
	prt_seperation_group();
	memset(dest50, 0, 50);
	memset(dorg50, 0, 50);
	test_memmove(dest50, &dest50[20], 10);
	test_memmove(dest50, &dest50[5], 12);
	test_memmove(&dest50[5], dest50, 12);
}
