#include "test.h"

int			integer = INT_MAX;
char		*string = NULL;
char		*string2 = NULL;
char		dstbuff[100], dest0[0], dest1[1], dest50[50], dstbuff2[100];
char		orgbuff[100], dorg0[0], dorg1[1], dorg50[50], orgbuff2[100];
char		*seperator = "==========================================================================\n";
char		*line = "--------------------------------------------------------------------------\n";
/*
	(void) dstbuff[100];
	(void) dstbuff2[100];
	(void) orgbuff[100];
	(void) orgbuff2[100];
*/

static void	run_all(void)
{
	test_char();   // tests complete
	test_string(); // tests complete
	test_memory();  // tests complete
	test_malloc();  // no iteri / mapi / strdup
	test_output();  // tests complete
	test_list();    // tests complete
}

static void	run_all_fun(void)
{
	fun_char();   // tests complete
	fun_string(); // tests complete
	fun_memory();  // tests complete
	fun_malloc();  // no iteri / mapi / strdup
	fun_output();  // tests complete
	fun_list();    // tests complete
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!strcmp(argv[1], "char"))
			test_char();
		else if (!strcmp(argv[1], "string"))
			test_string();
		else if (!strcmp(argv[1], "memory"))
			test_memory();
		else if (!strcmp(argv[1], "malloc"))
			test_malloc();
		else if (!strcmp(argv[1], "output"))
			test_output();
		else if (!strcmp(argv[1], "list"))
			test_list();
		else
			run_all();
	}
	else if (argc == 3 && !strcmp(argv[2], "fun"))
	{
		if (!strcmp(argv[1], "char"))
			fun_char();
		else if (!strcmp(argv[1], "string"))
			fun_string();
		else if (!strcmp(argv[1], "memory"))
			fun_memory();
		else if (!strcmp(argv[1], "malloc"))
			fun_malloc();
		else if (!strcmp(argv[1], "output"))
			fun_output();
		else if (!strcmp(argv[1], "list"))
			fun_list();
		else
			run_all_fun();
		
	}
	else
    {
		printf("enter ONE of those arguments:\n");
        printf("\tchar\tstring\tmemory\n\tmalloc\toutput\tlist\n");
        printf("entering a different word will call all tests.\n");
		printf("when using shorter tests for funcheck type fun as a second word.\n");
    }
	return (0);
}