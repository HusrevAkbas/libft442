#include "../tests/alllibs.h"

void	test_ft_lstadd_front()
{
	t_list	*lst = NULL;
	t_list	*l = ft_lstnew(ft_strdup("l head"));
	t_list	*n = ft_lstnew(ft_strdup("l last"));

printf("l con: %s\n", (char *) l->content);
	ft_lstadd_front(&lst, l);
printf("lst null ? %d\n", lst == NULL);
printf("lst con : %s\n", (char *) lst->content);
	ft_lstadd_front(&lst, n);
printf("lst null ? %d\n", lst == NULL);
printf("lst con : %s\n", (char *) lst->next->content);
}