#include "alllibs.h"

void	test_ft_strlcat()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "myfirstfunc";
    char str2[100] = "more some happens and more";
    char str3[100] = "myfirstfunc";
    char str4[100] = "more some happens and more";

	size_t p2 = strlcat(str1, str2, 9);
	printf("%s\n",str1);
	size_t p1 = ft_strlcat(str3, str4, 9);
	printf("%s\n",str3);
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

	p2 = strlcat(str1, "", 50);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "", 50);
	printf("%s\n",str3);
	printf("ft_func : %zu\n   func : %zu\n", p1, p2);

	p2 = strlcat(str1, "addsomemore", 50);
	printf("%s\n",str1);
	p1 = ft_strlcat(str3, "addsomemore", 50);
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
}