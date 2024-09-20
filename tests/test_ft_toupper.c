#include "alllibs.h"

void test_ft_toupper()
{
    printf("1 ? %d\n", ft_toupper('1'));
    printf("1 ? %d\n", toupper('1'));
    printf("a ? %d\n", ft_toupper('a'));
    printf("a ? %d\n", toupper('a'));
    printf("z ? %d\n", ft_toupper('z'));
    printf("z ? %d\n", toupper('z'));
    printf("A ? %d\n", ft_toupper('A'));
    printf("A ? %d\n", toupper('A'));
    printf("Z ? %d\n", ft_toupper('Z'));
    printf("Z ? %d\n", toupper('Z'));
}