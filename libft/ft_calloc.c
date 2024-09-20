/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:10:26 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/12 19:10:32 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pointer;
	size_t	i;

	if (nmemb * size > INT_MAX || nmemb * size == 0)
		return (0);
	pointer = malloc(nmemb * size);
	// check if malloc failed
	i = 0;
	while (i < size * nmemb)
		pointer[i++] = 0;
	return ((void *) pointer);
}
