#include "alllibs.h"

void	test_my_strtrim(char *s, char *ss, char *sss)
{
	char	*p;
	int		i;
	p = ft_strtrim(ss, sss);
	i = 0;
	printf("\n%s\ns1: %s\ns2: %s\nresult: ", s, ss, sss);
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

void	test_ft_strtrim()
{
	// test_my_strtrim("TEST 1", "ieuauieaHOIDAuieauTHEAMauieaiuae", "uiea");
	// test_my_strtrim("TEST 2", "ieuauieaHOIDAuieauTHEAM", "uiea");
	// test_my_strtrim("TEST 3", "HOIDAuieauTHEAMa", "uiea");
	// test_my_strtrim("TEST 4", "ieuauieaHOIDAuieauTHEAMa", "uea");
	test_my_strtrim("TEST 5", "ieuauieaHOIDAuieauTHEAMa", "uia");
	test_my_strtrim("TEST 6", "abc", "abcd");
}