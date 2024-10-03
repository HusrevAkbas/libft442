#include "test.h"

static void test_putchars(int c, char *str)
{
	int	fd = 1;
	printf("testing PUTCHR & PUTSTR & PUTENDL with '%c' & \"%s\"\n",c, str);
	ft_putstr_fd("FT_PUTCHAR: ", fd); ft_putchar_fd(c,fd); ft_putchar_fd('\n', fd);
	printf("OG_PUTCHAR: "); putchar(c); putchar('\n');
	ft_putstr_fd("FT_PUTSTR: ",fd); ft_putstr_fd(str, fd); ft_putchar_fd('\n', fd);
	ft_putstr_fd("FT_PUTENDL: ", fd); ft_putendl_fd(str, fd);
	printf("OG_PUTENDL: "); puts(str);
	prt_separation_test();
}
static void	test_putnbr(int n)
{
	printf("%i <= integer for testing FT_PUTNBR\n <= result ", n);
	ft_putnbr_fd(n, 1);
	printf("\n");
	prt_separation_test();
}

void	test_output()
{
	// PUTCHAR PUTSTR PUTENDL
	prt_seperation_group();
	test_putchars('u', "this string has no new line @ the end");
	test_putchars(0, "");
	//test_putchars(-45, NULL); // chrashes puts
	//test_putchars((char) NULL, NULL); // crashes puts
	//test_putchars('t', NULL); // NULL pointers will crash due to strlen
	// PUTNBR
	prt_seperation_group();
	test_putnbr(INT_MIN);
	test_putnbr(INT_MAX);
	test_putnbr(0);
	test_putnbr(-23442134);
}

void	fun_output()
{
	// PUTCHAR PUTSTR PUTENDL
	prt_seperation_group();
	test_putchars('u', "this string has no new line @ the end");
	// PUTNBR
	prt_seperation_group();
	test_putnbr(INT_MIN);
}
