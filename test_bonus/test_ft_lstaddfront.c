#include "../tests/alllibs.h"

void	test_ft_lstadd_front()
{
	t_list	*list;
	t_list	*list2;
	char	*str;
	char	*str2;

	str = (char *) malloc(50);
	str2 = (char *) malloc(50);
	ft_memcpy(str, "first node", 50);
	ft_memcpy(str2, "added to front", 50);

	list = ft_lstnew(str);
	list2 = ft_lstnew(str2);

	ft_lstadd_front(&list, list2);

	if (list != NULL && list2 != NULL)
	{
		printf ("first member content : %s\n", (char *) list2->content);
		printf ("is first member next NULL : %d\n", list2->next == NULL);
		printf ("is first member next pointer equal to second member pointer: %d\n", list2->next == list);
		printf ("second member content: %s\n", (char *) list2->next->content);
		printf("is second member next NULL : %d\n", list->next == NULL);
		ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}