/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:39:21 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/19 16:39:22 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	void	*new_content;

	node = (void *) malloc(sizeof(content)+sizeof(void*));
	if(!node)
		return 0;
	new_content = (void *) malloc(sizeof(content));
	if(!new_content)
		return 0;
	ft_memcpy(new_content, content, sizeof(content));
	node->content = new_content;
	node->next = 0;
	return (node);
}
