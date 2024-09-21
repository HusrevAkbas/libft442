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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  // t_list **start_pointer;
  // t_list *node;  start point will be allocated with malloc
  // t_list *next_node; next node to be binded with first
  // void  *new_content;  the content after application of function f

  // node = lst; assign lst to start node
  // start_pointer = & node; pointer to return
  // set_nodes(new_node, next_node, f, del); will be a recursive function applies f to nodes
  // return start_pointer;
}
