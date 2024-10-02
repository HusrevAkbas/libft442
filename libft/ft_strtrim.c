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
	char			*pointer;
	unsigned int	s1_length;
	unsigned int	start;
	unsigned int	end;

	s1_length = ft_strlen(s1);
	if (set == NULL || ft_strlen(set) == 0)
		return ((char *) ft_substr(s1, 0, s1_length));
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = 0;
	while ((s1_length - end) != 0 && ft_strchr(set, s1[s1_length - 1 - end]))
		end++;
	if (start + end >= s1_length)
	{
		pointer = (char *) malloc(1);
		if (pointer == NULL)
			return (NULL);
		pointer[0] = 0;
	}
	else
		pointer = (char *) ft_substr(s1, start, s1_length - end - start);
	return (pointer);
}
