#include "alllibs.h"

void	test_my_substr(char *s, char *ss, unsigned int start, size_t len)
{
	char	*p;
	int		i;
	p = ft_substr(ss, start, len);
	i = 0;
	printf("\n%s\nlen: %zu\nstring: %s\nresult: ", s, len, ss);
	while (p[i])
		printf("%c",p[i++]);
	printf("\n%p\n", p);
	free(p);
}

void	test_ft_substr()
{
	test_my_substr("TEST 1","LongStringOfMyMen", 5, 10);
	test_my_substr("TEST 2","LongStringOfMyMen", 3, 1);
	test_my_substr("TEST 3","ShorterStringOfMyJoyAndHisServants", 0, 100);
	test_my_substr("TEST 4","ShorterStringOfMyJoyAndHisServants", 10, 100);
	test_my_substr("TEST 5","ShorterStringOfMyJoyAndHisServants", 5, 15);
	test_my_substr("TEST 6","erStringOfMyJoy", 5, 15);
}