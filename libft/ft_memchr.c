/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:43:15 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/11 12:43:18 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	while (c > 128)
		c = c - 128;
	str = (char *) s;
	while (n > 0)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	return (0);
}
