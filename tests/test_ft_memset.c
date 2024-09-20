#include "alllibs.h"

void	test_ft_memset()
{
	//DONT HAVE A DETAILED CASE BASED TEST
	//ONLY CHECKS IF IT WORKED
	char str[100] = "my first memset func";
	void *ptr1 = &str;
	void *ptr = ft_memset(ptr1, 112, 15);
	printf("%s\n", str);
	void *ptr2 = memset(ptr1, 112, 15);
	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	printf("%s\n", str);

}