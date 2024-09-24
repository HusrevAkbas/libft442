#include "../tests/alllibs.h"

void	test_ft_lstadd_back()
{
	t_list	*list;
	t_list	*list2;
	char	*str;
	char	*str2;

	str = (char *) malloc(50);
	str2 = (char *) malloc(50);
	ft_memcpy(str, "first node", 50);
	ft_memcpy(str2, "added to back", 50);

	list = ft_lstnew(str);
	list2 = ft_lstnew(str2);

	ft_lstadd_back(&list, list2);

	if (list != NULL && list2 != NULL)
	{
		printf("first member content : %s\n", (char *) list->content);
		printf("is first member next NULL : %d\n", list->next == NULL);
		printf("is first member next pointer equal to second member pointer: %d\n", list->next == list2);
		printf("second member content: %s\n", (char *) list->next->content);
		printf("is second member next NULL : %d\n", list2->next == NULL);
		ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}