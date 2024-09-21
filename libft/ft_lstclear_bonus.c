/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:53:07 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/20 16:53:08 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
  t_list	*next_list;
  t_list  *temp;

  temp = *list;
  if (temp->next)
  {
    next_list = temp->next;
    ft_lstclear(&next_list, del);
  }
  (*del)(temp->content);
  (*del)(temp);
}
