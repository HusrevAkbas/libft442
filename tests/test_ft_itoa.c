#include "alllibs.h"

void	test_my_itoa(char *test, int n)
{
	printf("\n%s\n", test);
	char	*s;
	s = ft_itoa(n);
	printf("number: %d\nstring: %s\n", n, s);
}

void	test_ft_itoa()
{
	int i = 0;
	//test_my_itoa("TEST 1: 0: zero", 0);
	while (i > -22)
	{
		test_my_itoa("my test of", i--);
	}

	i = 99;
	while (i < 122)
	{
		test_my_itoa("my test of", i++);
	}
	test_my_itoa("TEST: positivi", 21474836);
	test_my_itoa("TEST: negative", -21474836);
	test_my_itoa("TEST: int max P", 2147483647);
	test_my_itoa("TEST: int min N", -2147483648);
	test_my_itoa("TEST: a lot of zeros P", 2000000000);
	test_my_itoa("TEST: a lot of zeros N", -2000000000);
}