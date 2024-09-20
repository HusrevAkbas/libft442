#include "alllibs.h"

void test_ft_atoi()
{
    printf("\ntest a random number\n");
    printf("ft_atoi: %d\n", ft_atoi("123"));
    printf("atoi: %d\n", atoi("123"));
    printf("result: %d\n",atoi("123") == ft_atoi("123"));

    printf("\ntest char at beginning\n");
    printf("ft_atoi: %d\n", ft_atoi("a123"));
    printf("atoi: %d\n", atoi("a123"));
    printf("result: %d\n",atoi("a123") == ft_atoi("a123"));

    printf("\ntest many spaces (   )\n");
    printf("ft_atoi: %d\n", ft_atoi("   -123"));
    printf("atoi: %d\n", atoi("   -123"));
    printf("result: %d\n",atoi("   -123") == ft_atoi("   -123"));

    printf("\ntest many minuses (---)\n");
    printf("ft_atoi: %d\n", ft_atoi("---123"));
    printf("atoi: %d\n", atoi("---123"));
    printf("result: %d\n",atoi("---123") == ft_atoi("---123"));

    printf("\ntest many plusses (+++++)\n");
    printf("ft_atoi: %d\n", ft_atoi("+++++123"));
    printf("atoi: %d\n", atoi("+++++123"));
    printf("result: %d\n",atoi("+++++123") == ft_atoi("+++++123"));

    printf("\ntest int max\n");
    printf("ft_atoi: %d\n", ft_atoi("2147483647"));
    printf("atoi: %d\n", atoi("2147483647"));
    printf("result: %d\n",atoi("2147483647") == ft_atoi("2147483647"));

    printf("\ntest int min\n");
    printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
    printf("atoi: %d\n", atoi("-2147483648"));
    printf("result: %d\n",atoi("-2147483648") == ft_atoi("-2147483648"));

    printf("\ntest many minus\n");
    printf("ft_atoi: %d\n", ft_atoi("--214748364"));
    printf("atoi: %d\n", atoi("--214748364"));
    printf("result: %d\n",atoi("--214748364") == ft_atoi("--214748364"));

    printf("\ntest many plus\n");
    printf("ft_atoi: %d\n", ft_atoi("++214748364"));
    printf("atoi: %d\n", atoi("++214748364"));
    printf("result: %d\n",atoi("++214748364") == ft_atoi("++214748364"));

    printf("\ntest zero\n");
    printf("ft_atoi: %d\n", ft_atoi("0"));
    printf("atoi: %d\n", atoi("0"));
    printf("result: %d\n",atoi("0") == ft_atoi("0"));

    printf("\ntest zero\n");
    printf("ft_atoi: %d\n", ft_atoi("-1"));
    printf("atoi: %d\n", atoi("-1"));
    printf("result: %d\n",atoi("-1") == ft_atoi("-1"));
}