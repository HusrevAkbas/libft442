#include "alllibs.h"

void	test_my_memmove(char *str, void *dest, void *src, size_t n)
{
	printf("TEST : %s\n", str);
	void *ptr1 = ft_memmove(dest, src, n);
	printf("ft_memmove: %s\n", (char *) ptr1);
	write(1, ptr1, n);
	write(1, "\n", 1);
}
void	test_or_memmove(char *str, void *dest, void *src, size_t n)
{
	(void) str;
	void *ptr2 = memmove(dest, src, n);
	printf("   memmove: %s\n", (char *) ptr2);
	write(1, ptr2, n);
	write(1, "\n", 1);
}
void	test_ft_memmove()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKS
	char	str1[50] = "this is destination";
	char	str2[50] = "this is destination";
	char	str3[50] = "what äüſş kind of source is this";
	char	str4[50] = "what äüſş kind of source is this";
	char	str5[50] = "what kind";
	char	str6[50] = "what kind";
	char	str7[50] = "hackaton solomon";
	char	str8[50] = "hackaton solomon";
	char	str9[50] = "con\0sec\0\0te\0tur";
	char	str10[50] = "con\0sec\0\0te\0tur";

	printf("TEST DEFINITIONS ARE NOT CORRECT size str1:\n");

	test_my_memmove("different arrays", str1, str3, 30);
	test_or_memmove("different arrays", str2, str4, 30);
	test_my_memmove("source starts in destination", str3, &str3[10], 8);
	test_or_memmove("source starts in destination", str4, &str4[10], 8);
	test_my_memmove("check different arrays", str5, str7, 20);
	test_or_memmove("check different arrays", str6, str8, 20);
	test_my_memmove("dest starts in src", &str3[10], str3, 30);
	test_or_memmove("dest starts in src", &str4[10], str4, 30);
	test_my_memmove("\\0 in string", str7, str9, 20);
	test_or_memmove("\\0 in string", str8, str10, 20);
}