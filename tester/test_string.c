#include "test.h"

static void test_atoi(char *str)
{
    printf("testing ATOI with: \"%s\"\n",str);
    printf("FT_ATOI: %i\n",ft_atoi(str));
    printf("OG_ATOI: %i\n",atoi(str));
    prt_separation_test();
}

static void test_strlen(char *str)
{
    printf("testing STRLEN with string \"%s\"\n", str);
    printf("FT_STRLEN: %zu\n", ft_strlen(str));
    printf("OG_STRLEN: %zu\n", strlen(str));
    prt_separation_test();
}
static void test_strrchr(char *str, int chr)
{
    printf("testing STRCHR & STRRCHR with: '%c' (%i) in str \"%s\"\n",chr, chr,str);
    printf("FT_STRCHR: %p\n", ft_strchr(str,chr));
    printf("OG_STRCHR: %p\n", strchr(str,chr));
    printf("FT_STRRCHR: %p\n", ft_strrchr(str,chr));
    printf("OG_STRRCHR: %p\n", strrchr(str,chr));
    prt_separation_test();
}

static void test_strncmp(char *s1, char *s2, int n)
{
    printf("testing STRNCMP with: \"%s\" & \"%s\" & n %i\n", s1, s2, n);
    printf("FT_STRNCMP: %d\n",ft_strncmp(s1,s2,n));
    printf("OG_STRNCMP: %d\n",strncmp(s1,s2,n));
    prt_separation_test();
}

static void test_strlcpy(char *str, int n)
{
    printf("testing STRLCPY with string \"%s\" & n = %i\n", str, n);
    //printf("FT_STRLCPY(NULL): %li | %s\n",ft_strlcpy(NULL,NULL,n),dest50);
    //printf("OG_STRLCPY(NULL): %li | %s\n",strlcpy(NULL,NULL,n),dorg50);
    printf("FT_STRLCPY(dest50): %li | %s\n",ft_strlcpy(dest50,str,n),dest50);
    printf("OG_STRLCPY(dorg50): %li | %s\n",strlcpy(dorg50,str,n),dorg50);
    printf("FT_STRLCPY(dest1): %li | %s\n",ft_strlcpy(dest1,str,n),dest1);
    printf("OG_STRLCPY(dorg1): %li | %s\n",strlcpy(dorg1,str,n),dorg1);
    printf("FT_STRLCPY(dest0): %li | %s\n",ft_strlcpy(dest0,str,n),dest0);
    printf("OG_STRLCPY(dorg0): %li | %s\n",strlcpy(dorg0,str,n),dorg0);
    prt_separation_test();
}

static void test_strlcat(char *src, int n)
{
    printf("testing STRLCAT with dest[50] \"%s\" & dorg[50] \"%s\" & string2 \"%s\" & n = %i\n",dest50, dorg50, src, n);
    printf("FT_STRLCAT(dest50) 1. run: %li | %s\n",ft_strlcat(dest50,src,n),dest50);
    printf("OG_STRLCAT(dorg50) 1. run: %li | %s\n",strlcat(dorg50,src,n),dorg50);
    printf("FT_STRLCAT(dest50) 2. run: %li | %s\n",ft_strlcat(dest50,src,n),dest50);
    printf("OG_STRLCAT(dorg50) 2. run: %li | %s\n",strlcat(dorg50,src,n),dorg50);
    prt_separation_test();
}

static void test_strnstr(char *str, char *sub, int n)
{
    printf("testing STRNSTR with string \"%s\" & string2 \"%s\" & n %i\n",str,sub,n);
    printf("FT_STRNSTR, return: %s\n", ft_strnstr(str,sub,n));
    printf("OG_STRNSTR, return: %s\n", strnstr(str,sub,n));
    prt_separation_test();
}

void test_string()
{
    // think about using a counter to at least get a number for PASS/FAIL
    // ATOI
    prt_seperation_group();
    //test_atoi(NULL); // FT & OG crash on NULL
    test_atoi("a22156.");
    test_atoi("  \t -+-23123.");
    test_atoi("  \t -§!,da#.");
    test_atoi("  \f\v\r   \t -98754568");
    test_atoi("-0");
    test_atoi("-1");
    test_atoi("-2147483648");
    test_atoi("-2147483649");
    test_atoi("2147483647");
    test_atoi("2147483648");
    test_atoi("+12345678901234567890");
    test_atoi("\t  -12345678901234567890");
    test_atoi("+1234567890123456789");
    test_atoi("+0000000000000000000000000000000000000000000000000123");
    // STRLEN
    prt_seperation_group();
    test_strlen("");
    test_strlen("hola");
    //test_strlen(NULL); // both OG and FT crash on NULL
    // STRCHR & STRRCHR  last occurence
    string = "iuzo3745huaos7d6ld";
    prt_seperation_group();
    test_strrchr(string, 5);
    test_strrchr(string, 'o');
    test_strrchr(string, 'o'+256);
    test_strrchr(string, -20);
    test_strrchr(string, 'X');
    test_strrchr(string, 0);
    //test_strrchr(NULL, 0); // FT & OG crash on NULL pointer
    string = "";
    test_strrchr(string, 'l');
    // STRNCMP
    string = "iuzo3745huaos7d6ld";
    prt_seperation_group();
    test_strncmp(string, "Iuzo376", 0);
    test_strncmp(string, "iuzo376", 10);
    test_strncmp(string, "iuzo374ü", 10);
    test_strncmp(string, "iuzo374á", 10);
    string = "alphabeta";
    test_strncmp(string, "alph", 5);
    string = "";
    test_strncmp(string, "",1);
    test_strncmp(string, "abc",2);
    string = "abcde";
    test_strncmp(string, "",1);
    test_strncmp(string, "",0);
    test_strncmp(NULL, NULL,0);
    //test_strncmp(NULL, "32",2);     // FT & OG crash with NULL
    //test_strncmp(string, NULL,2);     // FT & OG crash with NULL
    //test_strncmp(NULL, NULL,2);     // FT & OG crash with NULL
    // STRLCPY
    prt_seperation_group();
    test_strlcpy(string, 25);
    test_strlcpy("", 3);
    test_strlcpy("garbage", 1);
    test_strlcpy("asdf", -3);
    //test_strlcpy(NULL, 0);    // OG & FT crash on NULL src or dst
    //test_strlcpy(NULL, 5);      // OG & FT crash on NULL src or dst
    // STRLCAT
    prt_seperation_group();
    memset(dest50, 0, 50);
    memset(dorg50, 0, 50);
    test_strlcat("wert", 2);
    test_strlcat("xcvbnm", -3);
    test_strlcat("WERT", 5);
    test_strlcat("uiop", 0);
    test_strlcat("asdf", 16);
    test_strlcat("TEST",14); // dest have both 15 characters at this time
    test_strlcat("TEST",15); // dest have both 15 characters at this time
    test_strlcat("TEST",16); // dest have both 15 characters at this time
    test_strlcat("TEST",17); 
    test_strlcat("",3);
    test_strlcat("",15);
    test_strlcat("",16);
    test_strlcat("",0);
    //test_strlcat(NULL, 0);  // src OR dest NULL will crash OG & FT in strlen
    //test_strlcat(NULL, 10);
    // STRNSTR looks for substring in string within n bytes
    prt_seperation_group();
    string = "everything is 42";
    test_strnstr(string, "42", 15);
    test_strnstr(string, "42", 16);
    test_strnstr(string, "42", 30);
    test_strnstr(string, "is", 13);
    test_strnstr(string, "is", 12);
    test_strnstr(string, "is", 0);
    test_strnstr(string, "is", -11);
    test_strnstr(string, "XX", 50);
    test_strnstr(string, "", 20);
    //test_strnstr(NULL, "2", 20); // FT & OG crash on NULL
}

void fun_string()
{
    // think about using a counter to at least get a number for PASS/FAIL
    // ATOI
    prt_seperation_group();
    test_atoi("  \t -+-23123.");
    test_atoi("\t  -12345678901234567890");
    // STRLEN
    prt_seperation_group();
    test_strlen("hola");
    // STRCHR & STRRCHR  last occurence
    string = "iuzo3745huaos7d6ld";
    prt_seperation_group();
    test_strrchr(string, 'o');
    // STRNCMP
    string = "iuzo3745huaos7d6ld";
    prt_seperation_group();
    test_strncmp(string, "iuzo376", 10);
    string = "alphabeta";
    test_strncmp(string, "alph", 5);
    // STRLCPY
    prt_seperation_group();
    test_strlcpy(string, 25);
    // STRLCAT
    prt_seperation_group();
    memset(dest50, 0, 50);
    memset(dorg50, 0, 50);
    test_strlcat("wert", 2);
    test_strlcat("xcvbnm", -3);
    // STRNSTR looks for substring in string within n bytes
    prt_seperation_group();
    string = "everything is 42";
    test_strnstr(string, "42", 15);
}