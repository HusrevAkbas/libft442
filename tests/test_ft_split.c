#include "alllibs.h"
void	test_my_split(char *s, char *ss, char sss)
{
	char	**p;
	int		i;
	p = ft_split(ss, sss);
	i = 0;
	printf("\n%s\ns1: %s\nc: %c\n", s, ss, sss);
	while (p[i])
	{
		printf("p[%d]: %s %zu\n",i, p[i], ft_strlen(p[i]));
		i++;
	}
	printf("\n%p\n", p);
	free(p);
}

void	test_ft_split()
{
	//test_my_split("TEST 1", "ieuauie aHOIDAu ieauTHEAMa uieaiuae", 32);
	char *s1 = "myXXXnewXstringXXXXXgoingXXXXXXXtoXbeXanXarrayXXXXXXX";
	char *s2 = "my new string going   to be an  array   ";
	char *s3 = "array";
	test_my_split("TEST 1",s1, 'X');
	test_my_split("TEST 2",s2, 32);
	test_my_split("TEST 3",s3, 'X');
}