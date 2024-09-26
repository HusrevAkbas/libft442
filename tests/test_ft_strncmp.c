#include "alllibs.h"

void	test_ft_strncmp()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "myfirstfunc";

    char str2[100] = "";
	int res1;
	int res2;

	res1 = ft_strncmp(str1, str2, 50);
	res2 = strncmp(str1, str2, 50);
	printf("ft_func : %d\n   func : %d\n", res1, res2);

	res1 = ft_strncmp(str1, "stfu", 50);
	res2 = strncmp(str1, "stfu", 50);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
	res1 = ft_strncmp(str1, "dd", 50);
	res2 = strncmp(str1, "dd", 50);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
printf("int of \\200: %d\n", '\200');
	res1 = ft_strncmp("te\200", "tes\0", 6);
	res2 = strncmp("te\200", "tes\0", 6);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
}