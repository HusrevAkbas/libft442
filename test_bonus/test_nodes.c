#include "../tests/alllibs.h"

void	test_nodes()
{
	//test_ft_lstnew();
	//test_ft_lstadd_front();
	//test_ft_lstadd_back();
	//test_ft_lstsize();
	//test_ft_lstlast();
	//test_ft_lstdelone();
	//test_ft_lstclear();
	test_ft_lstiter();

	// t_list *node1;
	// t_list *node2;
	// t_list *node3;

	// char *s1 = malloc(50);
	// char *s2 = malloc(50);
	// char *s3 = malloc(50);
	
	// ft_memcpy(s1, "node 1", 50);
	// ft_memcpy(s2, "node 2", 50);
	// ft_memcpy(s3, "node 3", 50);

	// node1 = ft_lstnew(s1);
	// node2 = ft_lstnew(s2);
	// node3 = ft_lstnew(s3);
	// if (!node1 || !node2 || !node3)
	// 	printf("malloc error");
	// else
	// {
	// 	ft_lstadd_front(&node2, node1);
	// 	ft_lstadd_back(&node2, node3);

	// 	// node2->next = 0;
	// 	// printf("n1: %d\n", node1->next);

	// 	//ft_lstclear(&node1, ft_lstdeletecontent);

	// 	//printf("node1: %s\n",(char*) node1->content);
	// 	printf("node1 next p: %d\n", node1 == NULL);
	// 	//printf("size: %d\n", ft_lstsize(node1));
	// 	//printf("node1->next p: %s\n", (char*) node2->next->content);
	// 	//printf("node2->content: %s\n", (char *) node2->content);
	// 	//printf("node2->next: %s\n", (char *) node2->next->content);
	// 	// printf("node3->content: %s pointer: %p\n", (char *) node3->content, node3->content);
	// 	// printf("ft_lstlast(node1)->content: %s\n", (char *) ft_lstlast(node1)->content);
	// 	// printf("*node3->content: %s\n",(char *) (*node3).content);
	// // }
}