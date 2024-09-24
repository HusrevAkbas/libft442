/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:04:54 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/10 13:04:56 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_forward(char *destination, char *source, size_t n)
{
	while (n > 0)
	{
		*destination++ = *source++;
		n--;
	}
}

static void	move_backward(char *destination, char *source, size_t n)
{
	while (n > 0)
	{
		*destination-- = *source--;
		n--;
	}
}

size_t	set_n(size_t src_len, size_t n)
{
	if (n > src_len)
		return (src_len +1);
	else
		return (n);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	src_length;

	destination = (char *) dest;
	source = (char *) src;
	src_length = sizeof(src);
	if (dest - src < 0)
		move_forward(destination, source, set_n(src_length, n));
	else
	{
		if (n > src_length)
		{
			destination += src_length +1;
			source += src_length +1;
		}
		else
		{
			destination += n -1;
			source += n -1;
		}
		move_backward(destination, source, n);
	}
	return (dest);
}
