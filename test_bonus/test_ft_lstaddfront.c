#include "../tests/alllibs.h"

void	test_ft_lstadd_front()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	t_list	*list_null;

	char	str[100] = "Node 4";
	char	str2[100] = "Node 3";
	char	str3[100] = "Node 2";
	char	str4[100] = "Node 1";

	list_null = NULL;
	list = ft_lstnew(str);
	list2 = ft_lstnew(str2);
	list3 = ft_lstnew(str3);
	list4 = ft_lstnew(str4);

	ft_lstadd_front(&list, list2);
printf ("list equal ? : %d\n", list == list2);
printf ("1---list content : %s\n", (char *) list->content);
	ft_lstadd_front(&list, list3);
printf ("2---list content : %s\n", (char *) list->content);

	if (list != NULL && list2 != NULL && list3 != NULL && list4 != NULL)
	{
		printf ("list content : %s\n", (char *) list->content);
		printf ("list2 content : %s\n", (char *) list2->content);
		// printf ("list3 content : %s\n", (char *) list3->content);
		// printf ("list4 content : %s\n", (char *) list4->content);
		printf ("is list next NULL : %d\n", list->next == NULL);
		printf ("is list next pointer equal to second member pointer: %d\n", list2->next == list2);
		//printf ("list 4 next: %s\n", (char *) list2->next->content);
		// printf ("list 4 next next: %s\n", (char *) list4->next->next->content);
		// printf ("list 4 next next next: %s\n", (char *) list4->next->next->next->content);
		// printf("last member next NULL : %d\n", list->next == NULL);
		//ft_lstclear(&list, ft_lstdeletecontent);
	}
	else
		printf("there is a NULL list");
}