#include "alllibs.h"

void test_is_funcs(char *function_name, int (*f)(int c), int (*or_f)(int c), int showAll)
{
    printf("------------start-------------\n");
    printf("%s\n", function_name);
    int i = 0;
    while (i < 200)
    {
        if (showAll == 1 || ((f(i) != or_f(i)) && or_f(i) == (8 | 1024 | 2048 | 16384)))
        {
            printf("input %i my %s func: %i | %i : or %s func\n", i, function_name, f(i), or_f(i), function_name);
            printf("is diffirent: %i\n\n", f(i) != or_f(i));
        }
        i++;
    }
    printf("------------ end -------------\n");
}

void test_ft_isascii()
{
    test_is_funcs("isascii", ft_isascii, isascii, 0);
    test_is_funcs("isalnum", ft_isalnum, isalnum, 0);
    test_is_funcs("isalpha", ft_isalpha, isalpha, 0);
    test_is_funcs("isdigit", ft_isdigit, isdigit, 0);
    test_is_funcs("isprint", ft_isprint, isprint, 0);
}