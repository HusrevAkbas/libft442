#include "alllibs.h"

void	test_ft_strrchr()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "my zfirst mzemset funcmy first memsetz func";

    char str2[100] = "my";

	char *p1 = ft_strrchr(str1, 'z');
	char *p2 = strrchr(str1, 'z');
	printf("%p \n%p \n\n", p1, p2);

	p1 = ft_strchr(str1, 'z');
	p2 = strchr(str1, 'z');
	printf("%p \n%p \n\n", p1, p2);

	char *p3 = ft_strrchr(str2, 'a');
	char *p4 = strrchr(str2, 'a');
	printf("%p \n%p \n\n", p3, p4);

	char *p5 = ft_strrchr(str2, '\0');
	char *p6 = strrchr(str2, '\0');
	printf("%p \n%p \n\n", p5, p6);
}