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
write(1, "\n", 1);

	res1 = ft_strncmp(str1, "stfu", 50);
	res2 = strncmp(str1, "stfu", 50);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
write(1, "\n", 1);

	res1 = ft_strncmp(str1, "dd", 50);
	res2 = strncmp(str1, "dd", 50);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
write(1, "\n", 1);

printf("int of \\010: %d\n", '\001');
printf("int of \\200: %d\n", '\200');
printf("int of \\201: %d\n", '\201');
printf("int of \\202: %d\n", '\202');
	res1 = ft_strncmp("tes\200", "tes\0", 6);
	res2 = strncmp("tes\200", "tes\0", 6);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
write(1, "\n", 1);

printf("int of \\375: %c\n", '\375');
	res1 = ft_strncmp("abcdef", "abc\375", 6);
	res2 = strncmp("abcdef", "abc\375", 6);
	printf("ft_func : %d\n   func : %d\n", res1, res2);
}