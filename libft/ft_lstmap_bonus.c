/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:53:07 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/23 18:05:45 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_new_node(t_list *lst, t_list *next_node,
						void (*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*last_node_lst;

	new_node = ft_lstnew(next_node->content);
	if (new_node == NULL)
	{
		ft_lstclear(&lst, del);
		return ;
	}
	f(new_node->content);
	if (lst == NULL)
		lst = new_node;
	else
	{
		last_node_lst = ft_lstlast(lst);
		last_node_lst->next = new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_node;

	new_list = NULL;
	if (lst == NULL)
		return (NULL);
	next_node = lst;
	while (next_node != NULL)
	{
		set_new_node(new_list, next_node, f, del);
		next_node = next_node->next;
	}
	return (new_list);
}
