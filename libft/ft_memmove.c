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

void	move_forward(unsigned char *d, unsigned char *s, size_t n)
{
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
}

void	move_backward(unsigned char *d, unsigned char *s, size_t n)
{
	while (n > 0)
	{
		*d-- = *s--;
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
	unsigned char	*d;
	unsigned char	*s;
	size_t			src_length;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	src_length = ft_strlen(src);
	if (dest - src < 0)
		move_forward(d, s, set_n(src_length, n));
	else
	{
		if (n > src_length)
		{
			d += src_length +1;
			s += src_length +1;
		}
		else
		{
			d += n -1;
			s += n -1;
		}
		move_backward(d, s, n);
	}
	return (dest);
}
