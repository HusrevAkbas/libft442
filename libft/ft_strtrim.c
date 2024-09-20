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

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*p;
	unsigned int	s1_length;
	unsigned int	start;
	unsigned int	end;

	s1_length = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = 1;
	while ((s1_length - end) != 0 && ft_strchr(set, s1[s1_length - end]))
		end++;
	if (start >= s1_length)
		return (0);
	p = ft_substr(s1, start, s1_length - end - start + 1);
	return (p);
}
