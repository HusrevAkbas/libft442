#include "alllibs.h"
void	test_my_split(char *s, char *ss, char sss)
{
	char	**p;
	int		i;
	int 	j;
	p = ft_split(ss, sss);
	if (p == NULL)
	{
		printf("null pointer\n");
		return ;
	}
	i = 0;
	printf("\n%s\ns1: %s\nc: %c\n", s, ss, sss);
	while (p[i] != NULL)
	{
		write(1, p[i], ft_strlen((char *)p[i]));
		write(1, "\n", 1);
		i++;
	}
	printf("\n%p\n", p);
	j = 0;
	while (p[j])
	{
		free(p[j]);
		j++;
	}
	free(p);
}

void	test_ft_split()
{
	// test_my_split("TEST 5", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", 'X');
	// test_my_split("TEST 8", "", 'a');
	// test_my_split("TEST 3", "arrXay", 'X');
	// test_my_split("TEST 10", "xxxxxxxxxxxxhello!", 'x');
	// test_my_split("TEST 9", "hello!", 32);
	// test_my_split("TEST 1", "ieuauie aHOIDAu ieauTHEAMa    uieaiuae", ' ');
	test_my_split("TEST 2", "my new string going   to be an  array    ", ' ');
	// test_my_split("TEST 4", "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	// test_my_split("TEST 6", "lorem ipsum dolor sit amet, consectetur adipiscing elit.Sed non risus.Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor.Cras elementum ultricies diam.Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	// test_my_split("TEST 7", "XXmyXXXnewXstringXXXXXgoingXXXXXXXtoXbeXanXarrayXXXXXXXXX", 'X');
}