/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:47:59 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/13 16:48:01 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	word;

	if (ft_strlen(s) == 0)
		return (0);
	i = 0;
	word = 0;
	if (s[i] != c)
		word++;
	while (s[i +1])
	{
		if (s[i] == c && s[i + 1] != c)
			word++;
		i++;
	}
	return (word);
}

static char	**clear_mem(char **pointer, int i)
{
	while (i >= 0)
	{
		free(pointer[i]);
		i--;
	}
	free(pointer);
	pointer = NULL;
	return (pointer);
}

static char	**split(char **pointer, char *s, char c, size_t word)
{
	size_t	i;
	size_t	count_c;
	size_t	index;

	if (!s && !*s)
		return (NULL);
	i = 0;
	index = 0;
	while (word > index)
	{
		count_c = i;
		while (s[i] != 0 && s[i] == c)
		{
			count_c++;
			i++;
		}
		while (s[i] != 0 && s[i] != c)
			i++;
		pointer[index] = ft_substr(s, count_c, i - count_c);
		if (pointer[index] == NULL)
			return (clear_mem(pointer, index));
		index++;
	}
	pointer[word] = NULL;
	return (pointer);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	size_t	words;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	words = count_words(str, c);
	pointer = (char **) malloc((words + 1) * sizeof(char *));
	if (pointer == NULL)
		return (NULL);
	if (words == 0)
	{
		pointer[words] = NULL;
		return (pointer);
	}
	pointer = split(pointer, str, c, words);
	return (pointer);
}
