#include "../tests/alllibs.h"

void	test_ft_lstnew()
{
	t_list	*list;
	char	str[50] = "My Very New Content";

	list = ft_lstnew(str);

	if (list != NULL)
	{
		printf ("list content : %s\n", (char *) list->content);
		printf("is next null      : %d\n", list->next == NULL);
		//ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}