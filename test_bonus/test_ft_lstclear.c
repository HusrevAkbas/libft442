#include "../tests/alllibs.h"

void	test_ft_lstclear()
{
	t_list	*list  = (t_list *) ft_lstnew(ft_strdup("Node 1"));
	t_list	*list2 = (t_list *) ft_lstnew(ft_strdup("Node 2"));
	t_list	*list3 = (t_list *) ft_lstnew(ft_strdup("Node 3"));
	t_list	*list4 = (t_list *) ft_lstnew(ft_strdup("Node 4"));

	ft_lstadd_back(&list, list2);
	ft_lstadd_back(&list, list3);
	ft_lstadd_back(&list, list4);

	printf("list p: %p, content ? : %s, next p: %p\n", list, list->content ? (char *) list->content : "no content", list->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list2, list2->content ? (char *) list2->content : "no content", list2->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list3, list3->content ? (char *) list3->content : "no content", list3->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list4, list4->content ? (char *) list4->content : "no content", list4->next);

	ft_lstclear(&list, free);
	// ft_lstclear(&list3, free);

	//printf("is list null: %d\n", list == 0);
	//printf("list p: %p, content ? : %s, next p: %p\n", list, list->content ? (char *) list->content : "no content", list->next);
	//printf("list p: %p, content ? : %s, next p: %p\n", list2, list2->content ? (char *) list2->content : "no content", list2->next);
	//printf("list p: %p, content ? : %s, next p: %p\n", list3, list3->content ? (char *) list3->content : "no content", list3->next);
}