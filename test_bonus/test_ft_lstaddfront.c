#include "../tests/alllibs.h"

void	test_ft_lstadd_front()
{
	t_list	**lst = NULL;
	t_list	*l = ft_lstnew(ft_strdup("l head"));

	write(1, l->content, 10);
	ft_lstadd_front(lst, l);
	write(1, (*lst)->content, 10);
}