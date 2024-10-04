#include "test.h"

static void prt_node_str(t_list *node)
{
	if (!node)
		return ;
	printf("content \"%s\" | next %p\n", (char *) node->content, node->next);
}

static void	prt_lst_str(t_list *node)
{
	unsigned int ind = 0;
	printf("elements in list: %i |",ft_lstsize(node));
	printf("last element: %p\n", ft_lstlast(node));
	while (node)
	{
		printf("list element (%u) | ", ind);
		prt_node_str(node);
		node = node->next;
		ind++;
	}
	prt_seperation_group();
}

static void	prt_ele_str(void *content)
{
	printf("test of LSTITER: content %s\n", (char *) content);
}
/*/
static void	prt_ele_int(void *content)
{
	printf("test of LSTITER: content %i\n", *((int *) content));
}
*/

static void del_str_alloc(void *content)
{
	if (content)
		ft_memset(content, 0, ft_strlen((const char *) content));
	free(content);
}

static void del_str(void *content)
{
	content = "del applied"; // can't use memset -> all literals
}
/*
static void del_int(void *content)
{
	ft_memset(content, 0, sizeof (int));
}
*/

static void *mod_str(void *content)
{
	char *new;
	int	ind = 0;

	if (!content)
		return (NULL);
	new = ft_strdup((const char *) content);
	if(!new)
		return (NULL);
	while (new[ind])
	{
		new[ind] = ft_toupper(new[ind]);
		ind++;
	}
	return (new);
}
//static void *mod_int();

static void test_stringlist()
{
	t_list	*node = NULL;
	t_list	*strings = NULL;
	t_list	*last = NULL;
	t_list	*duplicate = NULL;
	t_list	*temp = malloc(sizeof (t_list));

	if (!temp)
		return ;
	// LSTNEW
	node = ft_lstnew((void *) "quack");
	// LSTADD_BACK
	prt_lst_str(strings);
	ft_lstadd_back(NULL, node);
	//ft_lstadd_back(&strings, node);
	ft_lstadd_back(&strings, ft_lstnew("bääh"));
	ft_lstadd_back(&strings, ft_lstnew(NULL));
	prt_lst_str(strings);
	ft_lstadd_back(&strings, ft_lstnew("squiek"));
	// LSTADD_FRONT
	prt_lst_str(strings);
	ft_lstadd_front(&strings, ft_lstnew((void *) "purrr"));;
	// LSTLAST - in prt_lst
	last = ft_lstlast(strings);
	prt_node_str(last);
	prt_lst_str(strings);
	// LSTSIZE - in prt_lst
	// LSTDELONE
	printf("testing LSTDELONE on FIRST element\n");
	temp->next = strings->next;
	ft_lstdelone(strings, del_str);
	strings = temp->next;
	free(temp);
	prt_lst_str(strings);
	// LSTITER
	prt_seperation_group();
	printf("testing LSTITER\n");
	ft_lstiter(strings, prt_ele_str);
	// LSTMAP
	prt_seperation_group();
	printf("testing LSTMAP\n");
	duplicate = ft_lstmap(strings, mod_str, del_str_alloc);
	prt_lst_str(strings);
	prt_lst_str(duplicate);
	// LSTCLEAR
	//printf("testing LSTCLEAR with (*del) NULL on (strings)\n");
	//ft_lstclear(&strings, NULL);
	printf("testing LSTCLEAR (strings)\n");
	ft_lstclear(&strings, del_str);
	printf("testing LSTCLEAR (duplicate)\n");
	ft_lstclear(&duplicate, del_str_alloc);
}

void test_list()
{
	test_stringlist();
}

void fun_list()
{
	test_stringlist();
}