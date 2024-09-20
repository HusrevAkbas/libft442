#include "alllibs.h"

void	test_ft_memchr()
{
	char	s[50] = "test of memchr";
	char	*p;
	p = ft_memchr(s, 'm', 20);
	if (p)
		printf("%p : %c\n", p, p[0]);
	else
		printf("%p\n", p);
}