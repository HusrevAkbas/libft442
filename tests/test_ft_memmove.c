#include "alllibs.h"

void	test_my_memmove(char *str, void *dest, void *src, size_t n)
{
	printf("TEST : %s\n\n", str);
	//printf("dest: %s\n src: %s\n", dest, src);
	void *ptr1 = ft_memmove(dest, src, n);
	write(1, ptr1, n);
	printf("ft_memmove: %s\n", (char *)ptr1);
}
void	test_or_memmove(char *str, void *dest, void *src, size_t n)
{
	(void) str;
	//printf("dest: %s\n src: %s\n", dest, src);
	void *ptr2 = memmove(dest, src, n);
	write(1, ptr2, n);
	printf("   memmove: %s\n\n", (char *)ptr2);
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

	printf("TEST DEFINITIONS ARE NOT CORRECT\n");

	test_my_memmove("different arrays", str1, str3, 30);
	test_or_memmove("different arrays", str2, str4, 30);
	test_my_memmove("source starts in destination", str3, &str3[10], 8);
	test_or_memmove("source starts in destination", str4, &str4[10], 8);
	test_my_memmove("check different arrays", str5, str7, 20);
	test_or_memmove("check different arrays", str6, str8, 20);
	test_my_memmove("dest starts in src", &str3[5], str3, 30);
	test_or_memmove("dest starts in src", &str4[5], str4, 30);
	test_my_memmove("\\0 in string", str7, str9, 10);
	test_or_memmove("\\0 in string", str8, str10, 10);
	/*
	char str3[50] = "my first memmove func";
	char str4[50] = "my first memmove func";
	const char *str5 = "copy this to other stringscopy this to other strings";
	const char *str6 = "another copy";
	printf("1str1: %s\n", str3);
	void *ptr2 = memmove(&str3[6], &str3[1], 30);
	printf("2str1: %s\n", ptr2);
	printf("1str2: %s\n", str4);
	void *ptr = ft_memmove(&str4[6], &str4[1], 30);
	printf("2str2: %s\n", ptr);
	printf("-str2: %s\n", str3);
	printf("-str2: %s\n", str4);

	printf("\n3str1: %s\n", str3);
	void *ptr3 = memmove(str3, str5, 30);
	printf("4str1: %s\n", ptr3);
	printf("3str2: %s\n", str4);
	void *ptr4 = ft_memmove(str4, str5, 30);
	printf("4str2: %s\n", ptr4);

	printf("\n3str1: %s\n", str3);
	void *ptr5 = memmove(&str3[5], str6, 10);
	printf("4str1: %s\n", ptr5);
	printf("3str2: %s\n", str4);
	void *ptr6 = ft_memmove(&str4[5], str6, 10);
	printf("4str2: %s\n", ptr6);

	int	*pint1 = 1234567;
	int	*pint2 = 1234567;
	int	*pint3 = 7654;
	printf("\n3str1: %d\n", pint1);
	void *ptr7 = memmove(pint1, pint3, 10);
	printf("4str1: %d\n", ptr7);
	printf("3str2: %d\n", pint2);
	void *ptr8 = ft_memmove(pint2, pint3, 10);
	printf("4str2: %d\n", ptr8);*/
}