#include "alllibs.h"
void	test_my_split(char *s, char *ss, char sss)
{
	char	**p;
	int		i;
	p = ft_split(ss, sss);
	i = 0;
	printf("\n%s\ns1: %s\nc: %c\n", s, ss, sss);
	while (p[i] != NULL)
	{
		write(1, p[i], ft_strlen(p[i]));
		write(1, "\n", 1);
		// printf("\np[%d]: %s %zu\n",i, p[i], ft_strlen(p[i]));
		i++;
	}
	printf("\n%p\n", p);
	free(p);
}

void	test_ft_split()
{
	//test_my_split("TEST 1", "ieuauie aHOIDAu ieauTHEAMa uieaiuae", 32);
	// char *s1 = "myXXXnewXstringXXXXXgoingXXXXXXXtoXbeXanXarrayXXXXXXX";
	// char *s2 = "my new string going   to be an  array   ";
	// char *s3 = "array";
	// test_my_split("TEST 1",s1, 'X');
	// test_my_split("TEST 2",s2, ' ');
	// test_my_split("TEST 3",s3, 'X');
	test_my_split("TEST 4", "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	test_my_split("TEST 5", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", 'X');
	test_my_split("TEST 6", "lorem ipsum dolor sit amet, consectetur adipiscing elit.Sed non risus.Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor.Cras elementum ultricies diam.Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
}