#include "alllibs.h"

void test_ft_tolower()
{
    printf("1 ? %d\n", ft_tolower('1'));
    printf("1 ? %d\n", tolower('1'));
    printf("a ? %d\n", ft_tolower('a'));
    printf("a ? %d\n", tolower('a'));
    printf("z ? %d\n", ft_tolower('z'));
    printf("z ? %d\n", tolower('z'));
    printf("A ? %d\n", ft_tolower('A'));
    printf("A ? %d\n", tolower('A'));
    printf("Z ? %d\n", ft_tolower('Z'));
    printf("Z ? %d\n", tolower('Z'));
}