#include "alllibs.h"

void	test_my_striteri(char *s, char *ss, void (*sss)(unsigned int, char*))
{
	int		i;
	printf("\n%s\nbefore: %s\n", s, ss);
	ft_striteri(ss, sss);
	i = 0;
	printf("\n%s\nafter : %s\n", s, ss);
}

void	uppe(unsigned int i, char *c)
{
	c[i] = ft_toupper(c[i]);
}
void	lowe(unsigned int i, char *c)
{
	c[i] = ft_tolower(c[i]);
}

void	test_ft_striteri()
{
	void	(*up)(unsigned int, char*) = &uppe;
	void	(*low)(unsigned int, char*) = &lowe;

	char	str1[50] = "some chunk in allocated memory";
	char	str2[50] = "GREAT EXPECTATIONS in allocated memory";
	char	str3[50] = "";

	test_my_striteri("TEST 1", str1, up);
	test_my_striteri("TEST 2", str2, low);
	test_my_striteri("TEST 3", str3, low);
}