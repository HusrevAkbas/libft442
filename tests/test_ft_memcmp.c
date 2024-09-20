#include "alllibs.h"

void	test_ft_memcmp()
{
	char	s1[50] = "test of memchr";
	char	s2[50] = "test of memchr";
	char	s3[50] = "test";
	int		p;
	p = ft_memcmp(s1, s2, 20);
	printf("%d\n", p);
	p = ft_memcmp(s1, s3, 20);
	printf("%d\n", p);
	p = ft_memcmp(s1, s3, 4);
	printf("%d\n", p);
	p = ft_memcmp(s1, s3, 5);
	printf("%d\n", p);
}