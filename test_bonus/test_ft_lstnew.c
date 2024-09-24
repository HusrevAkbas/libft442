#include "../tests/alllibs.h"

void	test_ft_lstnew()
{
	t_list	*list;
	char	*str;

	str = (char *) malloc(50);
	ft_memcpy(str, "some changes", 50);

	list = ft_lstnew(str);

	if (list != NULL)
	{
		printf ("list char content : %s\n", (char *) list->content);
		printf("is next null      : %d\n", list->next == NULL);
		ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}