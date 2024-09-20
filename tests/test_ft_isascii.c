#include "alllibs.h"

void test_ft_isascii()
{
    printf("-1: 0 ? %d\n",ft_isascii(-1));
    printf("0: 1 ? %d\n",ft_isascii(0));
    printf("10: 1 ? %d\n",ft_isascii(10));
    printf("127: 1 ? %d\n",ft_isascii(127));
    printf("128: 0 ? %d\n",ft_isascii(128));
}