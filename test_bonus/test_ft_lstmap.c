#include "../tests/alllibs.h"
void	*func_to_iter(void *pointer)
{
	char	*str;
	int		i;

	str = ft_strdup(pointer);
	if (str == NULL)
	{
		printf("str dup failed");
		return NULL;
	}
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return str;
}

void	test_ft_lstmap()
{
	char	*s;
	char	*s2;
	char	*s3;
	char	*s4;
	s = ft_strdup("Node some chunk 1");
	s2 = ft_strdup("Node some chunk 2");
	s3 = ft_strdup("Node some chunk 3");
	s4 = ft_strdup("Node some chunk 4");

	t_list	*list  = (t_list *) ft_lstnew(s);
	t_list	*list2 = (t_list *) ft_lstnew(s2);
	t_list	*list3 = (t_list *) ft_lstnew(s3);
	t_list	*list4 = (t_list *) ft_lstnew(s4);

	ft_lstadd_back(&list, list2);
	ft_lstadd_back(&list, list3);
	ft_lstadd_back(&list, list4);

	t_list *new_list;
	new_list = NULL;
	new_list = ft_lstmap(list, func_to_iter, free);

	printf("list p: %p, content ? : %s, next p: %p\n", list, list->content ? (char *) list->content : "no content", list->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list2, list2->content ? (char *) list2->content : "no content", list2->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list3, list3->content ? (char *) list3->content : "no content", list3->next);
	printf("list p: %p, content ? : %s, next p: %p\n", list4, list4->content ? (char *) list4->content : "no content", list4->next);
	
	printf("new list p: %p, content ? : %s, next p: %p\n", new_list, new_list->content ? (char *) new_list->content : "no content", new_list->next);
	printf("new list p: %p, content ? : %s, next p: %p\n", new_list->next, new_list->next->content ? (char *) new_list->next->content : "no content", new_list->next->next);
	printf("new list p: %p, content ? : %s, next p: %p\n", new_list->next->next, new_list->next->next->content ? (char *) new_list->next->next->content : "no content", new_list->next->next->next);
	printf("new list p: %p, content ? : %s, next p: %p\n", new_list->next->next->next, new_list->next->next->next->content ? (char *) new_list->next->next->next->content : "no content", new_list->next->next->next->next);

	ft_lstclear(&list, free);
	ft_lstclear(&new_list, free);

	printf("is list null: %d\n", list == 0);
	//printf("list p: %p, content ? : %s, next p: %p\n", list, list->content ? (char *) list->content : "no content", list->next);
	//printf("list p: %p, content ? : %s, next p: %p\n", list2, list2->content ? (char *) list2->content : "no content", list2->next);
	//printf("list p: %p, content ? : %s, next p: %p\n", list3, list3->content ? (char *) list3->content : "no content", list3->next);
}