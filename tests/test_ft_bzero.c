#include "alllibs.h"

void	test_ft_bzero()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
    char str1[100] = "my first memset funcmy first memset func";
    char str2[100] = "my first memset funcmy first memset func";

	char *p1 = str1;
	int	str1nulls = 0;
	ft_bzero(str1, 30);

	while(*p1 == '\0')
	{
		str1nulls++;
		p1++;
	}

	char *p2 = str2;
	int	str2nulls = 0;
	bzero(str2, 30);

	while(*p2 == '\0')
	{
		str2nulls++;
		p2++;
	}

	printf("ft_memset results-- %s : %d\n", ++p1, str1nulls);
	printf("   memset results-- %s : %d\n", ++p2, str2nulls);
	printf("%p\n%p\n", str1, str2);

}