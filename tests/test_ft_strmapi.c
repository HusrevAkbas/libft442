#include "alllibs.h"

void	test_my_strmapi(char *s, char *ss, char (*sss)(unsigned int, char))
{
	char	*p;
	int		i;
	p = ft_strmapi(ss, sss);
	i = 0;
	printf("\n%s\ns1   : %s\nresult: ", s, ss);
	if (p == 0)
	{
		free(p);
		return;
	}
	while (p[i])
		printf("%c",p[i++]);
	printf("\n%p\n", p);
	free(p);
}

char	upper(unsigned int i, char c)
{
	(void) i;
	c = ft_toupper(c);
	return (c);
}
char	lower(unsigned int i, char c)
{
	(void) i;
	c = ft_tolower(c);
	return (c);
}

void	test_ft_strmapi()
{
	char	(*up)(unsigned int, char) = &upper;
	char	(*low)(unsigned int, char) = &lower;
	
	test_my_strmapi("TEST 1", "some chunk", up);
	test_my_strmapi("TEST 2", "GREAT EXPECTATIONS", low);
	test_my_strmapi("TEST 3", "", low);
}