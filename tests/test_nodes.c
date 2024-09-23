 #include "alllibs.h"

void	test_nodes()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew("NODE 1");
	node2 = ft_lstnew("NODE 2");
	node3 = ft_lstnew("NODE 3");
	if (!node1 || !node2 || !node3)
		printf("malloc error");
	else
	{
		ft_lstadd_front(&node2, node1);
		ft_lstadd_back(&node2, node3);

		// node2->next = 0;
		// printf("n1: %d\n", node1->next);


		//ft_lstclear(&node2, ft_lstdeletecontent);
		printf("node1: %s\n",(char*) node1->content);
		printf("node1 next p: %p\n", node1->next);
		printf("size: %d\n", ft_lstsize(node1));
		printf("node1->next p: %d\n", node2->next == NULL);
		//printf("node2->content: %s\n", (char *) node2->content);
		//printf("node2->next: %s\n", (char *) node2->next->content);
		// printf("node3->content: %s pointer: %p\n", (char *) node3->content, node3->content);
		// printf("ft_lstlast(node1)->content: %s\n", (char *) ft_lstlast(node1)->content);
		// printf("*node3->content: %s\n",(char *) (*node3).content);
	}
}