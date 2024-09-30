#include "../tests/alllibs.h"

void	iter_upper(void *s)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
void iter_lower(void *s)
{
	char *str;
	int i;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
}

void	test_ft_lstiter()
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
		ft_lstadd_back(&list, list4);
		printf("last: %s\n", (char *) list->content);
		printf("last: %s\n", (char *) list2->content);
		printf("last: %s\n", (char *) list3->content);
		printf("last: %s\n", (char *) list4->content);
		ft_lstiter(list, iter_upper);
		printf("\nlast: %s\n", (char *) list->content);
		printf("last: %s\n", (char *) list2->content);
		printf("last: %s\n", (char *) list3->content);
		printf("last: %s\n", (char *) list4->content);
		ft_lstiter(list, iter_lower);
		printf("\nlast: %s\n", (char *) list->content);
		printf("last: %s\n", (char *) list2->content);
		printf("last: %s\n", (char *) list3->content);
		printf("last: %s\n", (char *) list4->content);
		//ft_lstclear(&list, free);
	}
	else
		printf("there is a NULL list");
}