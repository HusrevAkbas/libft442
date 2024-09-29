#include "alllibs.h"

void	test_ft_memchr()
{
	char	s[50] = "test bof memchr";
	char	*p;
	char	*p2;
	int		ip[7] = {-49, 49, 1, -1, 0, -2, 2};

	p = ft_memchr(s, 's', 3);
	p2 = memchr(s, 's', 3);

	int	*i = ft_memchr(ip, -1, 28);
	if (i)
		printf("my memc pi: %p, i: %d\n", i, *i);
	else
		printf("there is no i\n");
	i = (int*) memchr(ip, -1, 28);
	if (i)
		printf("or memc pi: %p, i: %d\n", i, *i);
	else
		printf("there is no i\n");
	printf("p -1: %p, ip[3]: %d\n", &ip[3], ip[3]);
	if (p)
		printf("%s : %p : %c\n", p, p, p[0]);
	if (p2)
		printf("%s : %p : %c\n", p2, p2, p2[0]);
	else
		printf("%p\n", p);
	// ip = ft_memchr(i, -2, 6);
	// // p = ft_memchr(, '\364', 37);
	// if (*ip)
	// 	printf("%p : %d\n", ip, (int) *ip);
	// else
	// 	printf("%p\n", p);
}