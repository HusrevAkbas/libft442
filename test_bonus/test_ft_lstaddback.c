#include "../tests/alllibs.h"

void	test_ft_lstadd_back()
{
	t_list	*head = NULL;
	t_list	*list1 = ft_lstnew(ft_strdup("list 1"));
	t_list	*list2 = ft_lstnew(ft_strdup("list 2"));
	t_list	*list3 = ft_lstnew(ft_strdup("list 3"));

	printf("list 1 con: %s, list 1 p: %p, list 1 next p: %p\n", (char *)list1->content, list1, list1->next);
	printf("list 2 con: %s, list 2 p: %p, list 2 next p: %p\n", (char *)list2->content, list2, list2->next);
	printf("list 3 con: %s, list 3 p: %p, list 3 next p: %p\n", (char *)list3->content, list3, list3->next);

	ft_lstadd_back(&head, list1);
	ft_lstadd_back(&head, list2);
	ft_lstadd_back(&head, list3);

	printf("list 1 con: %s, list 1 p: %p, list 1 next p: %p\n", (char *)list1->content, list1, list1->next);
	printf("list 2 con: %s, list 2 p: %p, list 2 next p: %p\n", (char *)list2->content, list2, list2->next);
	printf("list 3 con: %s, list 3 p: %p, list 3 next p: %p\n", (char *)list3->content, list3, list3->next);

	printf("l1: %s, l2: %s, l3: %s", list1->content, list1->next->content, ft_lstlast(list1)->content);
}