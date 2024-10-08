#include "alllibs.h"

void	test_ft_strlcpy()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "myfirstfunc";
    char str2[100] = "things happens";
    char str3[100] = "some more happens";

	memset(str1, 'A', 100);
	size_t p1 = ft_strlcpy(str1, str2, 1);
	printf("[0] %c, [1]%c\n", str1[0], str1[1]);
	memset(str1, 0, 100);
	size_t p2 = strlcpy(str1, str2, 1);
	printf("[0] %c, [1]%c\n", str1[0], str1[1]);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);

	p2 = strlcpy(str1, "stfu", 50);
	printf("%s\n",str1);
	p1 = ft_strlcpy(str1, "stfu", 50);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);

	p2 = strlcpy(str1, "dd", 50);
	printf("%s\n",str1);
	p1 = ft_strlcpy(str1, "dd", 50);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);

	p2 = strlcpy(str1, "", 10);
	printf("%s\n",str1);
	p1 = ft_strlcpy(str1, "", 10);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);

	p2 = strlcpy(str1, str3, 20);
	printf("%s\n",str1);
	p1 = ft_strlcpy(str1, str3, 20);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);

	p2 = strlcpy(str1, str3, 1);
	printf("%s\n",str1);
	p1 = ft_strlcpy(str1, str3, 1);
	printf("ft_func : %zu\n   func : %zu\n%s\n", p1, p2, str1);
}