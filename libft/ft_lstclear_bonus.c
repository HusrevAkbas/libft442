/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:53:07 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/23 17:59:13 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_list(t_list *list, void (*del)(void *))
{
	if (list == NULL)
		return ;
	delete_list(list->next, del);
	ft_lstdelone(list, del);
}

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*temp;

	temp = *list;
	delete_list(temp, del);
	list = NULL;
}
