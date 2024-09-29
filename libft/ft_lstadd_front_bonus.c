/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:23:15 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/23 18:00:06 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;
	t_list	*next_node;
	t_list	*copy;
	t_list	*new_node;
	
	if ((*lst)->content == NULL)
	{
		(*lst)->content = new->content;
		(*lst)->next = NULL;
		return ;
	}
	next_node = *lst;
	copy = next_node;
	node = new;
	next_node->content = node->content;
	while (next_node->next)
	{
		copy = next_node->next;
		node = next_node;
		next_node = copy;
		next_node->content = node->content;
	}
	new_node = ft_lstnew(copy->content);
	next_node->content = node->content;
	next_node->next = new_node;
}
