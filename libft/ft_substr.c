/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:04:23 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/13 15:04:24 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	unsigned int	s_length;
	unsigned int	i;

	s_length = ft_strlen(s);
	if (s_length < start + len)
		len = s_length - start;
	pointer = (char *) malloc(len + 1);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	i = 0;
	while (len > i && s[start])
		pointer[i++] = s[start++];
	pointer[i] = 0;
	return (pointer);
}
