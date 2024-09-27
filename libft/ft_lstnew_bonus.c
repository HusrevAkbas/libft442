/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:39:21 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/23 18:07:51 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	void	*new_content;

	node = (t_list *) malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	new_content = (void *) malloc(sizeof(content));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	ft_memcpy(new_content, content, sizeof(content));
	node->content = new_content;
	node->next = NULL;
	return (node);
}
