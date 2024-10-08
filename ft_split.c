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

static void	clear_mem(char **pointer, int i)
{
	while (i >= 0)
	{
		free(pointer[i]);
		i--;
	}
	free(pointer);
	pointer = NULL;
}

static char	*split(char *s, char c, int word)
{
	size_t	i;
	size_t	count_c;
	char	*new_word;

	i = 0;
	if (!s && !*s)
		return (NULL);
	while (word >= 0)
	{
		count_c = i;
		while (s[i] != 0 && s[i++] == c)
			count_c++;
		while (s[i] != 0 && s[i] != c)
			i++;
		word--;
	}
	if (count_c == ft_strlen(s))
		return (NULL);
	new_word = ft_substr(s, count_c, i - count_c);
	if (new_word == NULL)
		return (NULL);
	return (new_word);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	int		words;
	int		index;

	if (s == NULL)
		return (NULL);
	str = (char *) s;
	words = count_words(str, c);
	pointer = (char **) malloc((words + 1) * sizeof(char *));
	if (pointer == NULL)
		return (NULL);
	index = 0;
	while (words > index)
	{
		pointer[index] = split(str, c, index);
		if (pointer[index] == NULL)
		{
			clear_mem(pointer, words);
			return (NULL);
		}
		index++;
	}
	pointer[words] = NULL;
	return (pointer);
}
