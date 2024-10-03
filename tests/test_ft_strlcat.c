#include "alllibs.h"

void	test_ft_strlcat()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "";
    char str2[100] = "more some happens and more";
    char str3[100] = "";
    char str4[100] = "more some happens and more";

memset(str1, 0, 100);
str1[0] = 'B';
	size_t p2 = strlcat(str1, "AAAAAAAAA", 1);
	printf("[0]: %c, [1]: %c, s: %s\n", str1[0], str1[1], str1);

memset(str3, 0, 100);
str3[0] = 'B';
	size_t p1 = ft_strlcat(str3, "AAAAAAAAA", 1);
	printf("%s\n",str3);
	printf("[0]: %c, [1]: %c, s: %s\n", str3[0], str3[1], str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);

	p2 = strlcat(str1, "stfu", 50);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "stfu", 50);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);

	p2 = strlcat(str1, "dd", 50);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "dd", 50);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);

	p2 = strlcat(str1, "", 5);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "", 5);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);

	p2 = strlcat(str1, str2, 30);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, str4, 30);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);
	
	p2 = strlcat(str1, str2, 18);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, str4, 18);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);
	
	p2 = strlcat(str1, "\b\b\b\b\baaa", 38);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "\b\b\b\b\baaa", 38);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);
}