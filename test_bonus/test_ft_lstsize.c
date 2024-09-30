#include "../tests/alllibs.h"

void	test_ft_lstsize()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	*str;
	char	*str2;
	int		size;

	str = (char *) malloc(50);
	str2 = (char *) malloc(50);
	ft_memcpy(str, "first node", 50);
	ft_memcpy(str2, "added to back", 50);

	list = NULL;
	printf("size of null list: %d\n", ft_lstsize(list));
	list = ft_lstnew(str);
	printf("size of list: %d\n", ft_lstsize(list));
	list2 = ft_lstnew(str2);
	list3 = ft_lstnew(str);
	list4 = ft_lstnew(str2);

	ft_lstadd_back(&list, list2);
	printf("size of added 1 list: %d\n", ft_lstsize(list));
	ft_lstadd_back(&list, list3);
	printf("size of added 2 list: %d\n", ft_lstsize(list));
	ft_lstadd_back(&list, list4);
	printf("size of added 3 list: %d\n", ft_lstsize(list));

	size = ft_lstsize(list);

	if (list != NULL && list2 != NULL)
	{
		printf("size is: %d\n", size);
		printf("first member content : %s\n", (char *) list->content);
		// printf("is first member next NULL : %d\n", list->next == NULL);
		// printf("is first member next pointer equal to second member pointer: %d\n", list->next == list2);
		// printf("second member content: %s\n", (char *) list->next->content);
		// printf("is second member next NULL : %d\n", list2->next == NULL);
		ft_lstclear(&list, free);
	}
	else
		printf("there is a NULL list");
}