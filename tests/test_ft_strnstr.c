#include "alllibs.h"

void	test_ft_strnstr()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "myfirstfunc";

    char str2[100] = "";

	char *p1 = ft_strnstr(str1, str2, 50);
	char *p2 = ft_strnstr(str1, str2, 50);
	printf("ft_func : %p\n   func : %p\n", p1, p2);
	printf("ft_func : %s\n   func : %s\n", p1, p2);

	p1 = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	p2 = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	printf("ft_func : %p\n   func : %p\n", p1, p2);
	printf("ft_func : %s\n   func : %s\n", p1, p2);

	p1 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	p2 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("ft_func : %p\n   func : %p\n", p1, p2);
	printf("ft_func : %s\n   func : %s\n", p1, p2);

	p1 = ft_strnstr(str1, "stfu", 50);
	p2 = ft_strnstr(str1, "stfu", 50);
	printf("ft_func : %p\n   func : %p\n", p1, p2);
	printf("ft_func : %s\n   func : %s\n", p1, p2);

	p1 = ft_strnstr(str1, "dd", 50);
	p2 = ft_strnstr(str1, "dd", 50);
	printf("ft_func : %p\n   func : %p\n", p1, p2);
	printf("ft_func : %s\n   func : %s\n", p1, p2);
}