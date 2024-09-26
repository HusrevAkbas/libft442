#include "alllibs.h"

void	test_ft_memchr()
{
	char	s[50] = "btest of memchr";
	char	*p;
	p = ft_memchr(s, 'b', 5);
	if (p)
		printf("%s : %p : %c\n", p, p, p[0]);
	else
		printf("%p\n", p);
}