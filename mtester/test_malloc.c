#include "test.h"
#include <string.h>

static void test_calloc(size_t nmemb, size_t size)
{
    void *ft1, *og1;
    size_t mem = nmemb * size;//ft_calcprtmem(nmemb * size);

    ft1 = ft_calloc(nmemb, size);
    og1 = calloc(nmemb,size);
    printf("testing CALLOC with: nmemb %zu, size %zu\n",nmemb, size);
    printf("FT_CALLOC: %p\n", ft1);
    ft_print_memory(ft1, mem);
    printf("OG_CALLOC: %p\n", og1);
    ft_print_memory(og1, mem); //
    free(ft1);
    free(og1);
    prt_separation_test();
}

static void test_strdup(const char *str)
{
    char *ft, *og;

    printf("testing STRDUP with \"%s\" %p\n", str, str);
    ft = ft_strdup(str);
    og = strdup(str);
    if (!ft || !og)
        return ;
    printf("FT_STRDUP: %p %s\n", ft, ft);
    printf("OG_STRDUP: %p %s\n", og, og);
    free(ft);
    free(og);
    prt_separation_test();
}
static void test_itoa(int n)
{
	char *res;

    res = ft_itoa(n);
    printf("testing ft_itoa with: num=%i | addr=%p str=%s\n",n,res,res);
    free(res);
    prt_separation_test();
}

static void test_split(char c)
{
    char **new = ft_split(string, c);
    size_t  ind = 0;

    printf("testing FT_SPLIT with: \"%s\" c='%c'\n", string, c);
    if (!new)
        return ;
    if (string)
    {
        while (new[ind])
        {
            ft_putendl_fd(new[ind], 1);
            free(new[ind++]);
        }
        free(new[ind]);
        free(new);
    }
    prt_separation_test();
}

static void test_substr(unsigned int ind, size_t len)
{
    char *new;

    printf("testing FT_SUBSTR with: \"%s\" ind %u len %zu\n", string, ind, len);
    new = ft_substr(string, ind, len);
    printf("resulting string: %s\n", new);
    free(new);
}

static void test_strjoin(const char *s1, const char *s2)
{
    char *new;

    printf("testing FT_STRJOIN with: \"%s\" & \"%s\"\n", s1, s2);
    new = ft_strjoin(s1, s2);
    printf("joined new string: %s\n", new);
    free(new);
    prt_separation_test();
}

static void test_strtrim(const char *str, const char *set)
{
    char *res = ft_strtrim(str, set);

    printf("testing FT_STRTRIM with: \"%s\" | set \"%s\"\n", str, set);
    printf("trimmed result: \"%s\"\n", res);
    free(res);
    prt_separation_test();
}

void test_malloc()
{
    // STRDUP
    prt_seperation_group();
    test_strdup("bla");
    test_strdup("");
    //test_strdup(NULL);  // both cannot handle NULL pointers => strlen
    // CALLOC
    prt_seperation_group();
    test_calloc(2, 10);
    test_calloc(0, 2);
    test_calloc(3, 0);
    test_calloc(0, 0);
    // ITOA
    prt_seperation_group();
    test_itoa(INT_MIN);
    test_itoa(INT_MAX);
    test_itoa(23456345);
    test_itoa(97889465);
    test_itoa(0);
    // STRITERI
    // STRMAPI
    // SPLIT
    prt_seperation_group();
    string = "alpha,beta,gamma,delta,Z";
    test_split(',');
    string = ",,alpha,beta,gamma,delta,,Z,,,";
    test_split(',');
    string = ",,,,,";
    test_split(',');
    string = "there is no delimiter";
    test_split(',');
    string = "";
    test_split(',');
    string = NULL;
    test_split(',');
    // SUBSTR
    prt_seperation_group();
    string = "show me the money";
    test_substr(12, 5);
    test_substr(0, 0);
    test_substr(30, 4);
    test_substr(0, 42000);
    string = "";
    test_substr(0, 3);
    string = NULL;
    test_substr(0, 5);
    // STRJOIN
    prt_seperation_group();
    test_strjoin("basic", "simple");
    test_strjoin("","");
    test_strjoin("", "first is empty");
    test_strjoin("second is empty", "");
    test_strjoin(NULL, "first is NULL");
    test_strjoin(NULL, NULL);
    test_strjoin("malloc ???", "where is my ");
    // STRTRIM
    prt_seperation_group();
    test_strtrim("trallala", "la");
    test_strtrim("trallalalala", "");
    test_strtrim("", "la");
    test_strtrim("", "");
    test_strtrim("", NULL);
    test_strtrim(NULL, NULL);
    test_strtrim(NULL, "la");
    test_strtrim("no set pointer", NULL);
    test_strtrim("uiiiiiiiiiiiixu", "iu");
    test_strtrim("4224242224424224424242", "42");
}

void fun_malloc()
{
    // STRDUP
    // CALLOC
    test_calloc(2, 10);
    test_calloc(0, 2);
    // ITOA
    prt_seperation_group();
    test_itoa(INT_MIN);
    test_itoa(97889465);
    // STRITERI
    // STRMAPI
    // SPLIT
    prt_seperation_group();
    string = "alpha,beta,gamma,delta,Z";
    test_split(',');
    // SUBSTR
    prt_seperation_group();
    string = "show me the money";
    test_substr(12, 5);
    // STRJOIN
    prt_seperation_group();
    test_strjoin("basic", "simple");
    test_strjoin(NULL, "first is NULL");
    // STRTRIM
    prt_seperation_group();
    test_strtrim("trallala", "la");
    test_strtrim("4224242224424224424242", "42");
}
