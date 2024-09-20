#include "alllibs.h"
void	test_my_strjoin(char *s, char *ss, char *sss)
{
	char	*p;
	int		i;
	p = ft_strjoin(ss, sss);
	i = 0;
	printf("\n%s\ns1: %s\ns2: %s\nresult: ", s, ss, sss);
	while (p[i])
		printf("%c",p[i++]);
	printf("\n%p\n", p);
	free(p);
}

void	test_ft_strjoin()
{
	test_my_strjoin("TEST 1", "LongStringOfMyMen", " Add this");
	test_my_strjoin("TEST 2", "LongStringOfMyMen", " another string to join");
	test_my_strjoin("TEST 3", "ShorterStringOfMyJoyAndHisServants", "please let me in");
	test_my_strjoin("TEST 4", "Shorter", ", cut it shorter");
	test_my_strjoin("TEST 5", "", "");
}