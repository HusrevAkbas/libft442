#include "../tests/alllibs.h"

void	test_ft_lstdelone()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	*str;
	char	*str2;
	char	*str3;
	char	*str4;

	str = (char *) malloc(50);
	str2 = (char *) malloc(50);

	str3 = (char *) malloc(50);
	str4 = (char *) malloc(50);
	ft_memcpy(str, "head 1", 50);
	ft_memcpy(str2, "node 2", 50);

	list = ft_lstnew(str);
	list2 = ft_lstnew(str2);

	ft_memcpy(str3, "node 3", 50);
	ft_memcpy(str4, "node 4", 50);

	list3 = ft_lstnew(str3);
	list4 = ft_lstnew(str4);


	if (list != NULL && list2 != NULL && list3 != NULL && list4 != NULL)
	{
		ft_lstadd_back(&list, list2);
		ft_lstadd_back(&list, list3);
		printf("list2: %s\n", (char *) list2->content);
		ft_lstdelone(list2, ft_lstdeletecontent);
		// printf("list2: %s\n", (char *) list2->content);
		// printf("is list2 NULL: %s\n", (char *) list2->next->content);
		//ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}