#include "../tests/alllibs.h"

void	test_ft_printf()
{
	ft_printf("this is my own %s\n", "printf function");
	ft_printf("it has bonus part %0+15i\n", 11);
}