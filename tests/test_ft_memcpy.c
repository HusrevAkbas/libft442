#include "alllibs.h"

void	test_my_memcpy(char *str, void *dest, void *src, size_t n)
{
	printf("TEST : %s\n\n", str);
	//printf("dest: %s\n src: %s\n", dest, src);
	void *ptr1 = ft_memcpy(dest, src, n);
	printf("ft_memcpy: %s\n", (char *)ptr1);
}
void	test_or_memcpy(char *str, void *dest, void *src, size_t n)
{
	(void) str;
	//printf("dest: %s\n src: %s\n", dest, src);
	void *ptr2 = memcpy(dest, src, n);
	printf("   memcpy: %s\n\n", (char *)ptr2);
}
void	test_ft_memcpy()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKS
	// char	str1[50] = "this is destination";
	// char	str2[50] = "this is destination";
	// char	str3[50] = "what üşäſ kind of source is this";
	// char	str4[50] = "what üşäſ kind of source is this";
	// char	str5[50] = "what kind";
	// char	str6[50] = "what kind";
	// char	str7[50] = "hackaton solomon";
	// char	str8[50] = "hackaton solomon";

	// printf("TEST DEFINITIONS ARE NOT CORRECT\n");

	// test_my_memcpy("with special characters", str1, str3, 30);
	// test_or_memcpy("different arrays", str2, str4, 30);
	// test_my_memcpy("check different arrays", str5, str7, 20);
	// test_or_memcpy("check different arrays", str6, str8, 20);
	// test_my_memcpy("overlapping", &str3[5], str3, 30);
	// test_or_memcpy("overlapping", &str4[5], str4, 30);

	char *dest[100];

	memset(dest,'A', 99);
	test_my_memcpy("test franki", dest, "coucou", 0);
}