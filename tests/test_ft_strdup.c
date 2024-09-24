#include "alllibs.h"

void	test_my_strdup(char *s, char *ss)
{
	char	*pointer;
	int i = 0;
	printf("%s\nstring: %s\nresult: ", s, ss);
	pointer = ft_strdup(ss);
	while (pointer[i])
	{
	printf("%c", pointer[i]);
	i++;
	}
	printf("\n%p\n", pointer);
	free(pointer);
	printf("%d%p\n", pointer[i], pointer);
	printf("END OF TEST\n\n");
}
void	test_or_strdup(char *s, char *ss)
{
	char	*pointer;
	int i = 0;
	printf("%s\nstring: %s\nresult: ", s, ss);
	pointer = strdup(ss);
	while (pointer[i])
	{
		printf("%c", pointer[i]);
		i++;
	}
	printf("\n%p\n", pointer);
	free(pointer);
	printf("%d%p\n", pointer[i], pointer);
	printf("END OF TEST\n\n");
}

//IN FT_CALLOC SET THE BYTE RIGHT AFTER ALLOCATION TO NOT NULL, THEN COUNT NULL BYTES
void	test_ft_strdup()
{
	test_my_strdup("TEST MY 1", "my very own string");
	test_my_strdup("TEST MY 2", "6chars");
	test_my_strdup("TEST MY 3", "");
	test_or_strdup("TEST OR 1", "my very own string");
	test_or_strdup("TEST OR 2", "6chars");
	test_or_strdup("TEST OR 3", "");
}