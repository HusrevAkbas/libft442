#include "alllibs.h"

void	test_ft_strchr()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "my first memset funcmy first memset func";

    char str2[100] = "my";

	char *p1 = ft_strchr(str1, 'u');
	char *p2 = strchr(str1, 'u');
	printf("%p \n%p \n", p1, p2);

	char *p3 = ft_strchr(str2, 'a');
	char *p4 = strchr(str2, 'a');
	printf("%p \n%p \n", p3, p4);

	char *p5 = ft_strchr(str2, '\0');
	char *p6 = strchr(str2, '\0');
	printf("%p \n%p \n", p5, p6);
}