#include "alllibs.h"

void	test_calloc(char *s, size_t nmemb,size_t size)
{
	char	*pointer;
	int i = 0;
printf("%s nmem: %zu, size: %zu\n", s, nmemb, size);
	pointer = ft_calloc(nmemb, size);
	while (pointer[i] == 0)
		i++;
	printf("i: %d %p\n", i, pointer);
	free(pointer);
}

//IN FT_CALLOC SET THE BYTE RIGHT AFTER ALLOCATION TO NOT NULL, THEN COUNT NULL BYTES
void	test_ft_calloc()
{
	test_calloc("test 1", 10, 10);
	test_calloc("test 2", 3, 3);
}