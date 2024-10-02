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
		if (pointer[i])
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
	count_c = 0;
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
	new_word = (char *) ft_calloc(i - count_c + 1, sizeof(char));
	if (new_word == NULL)
		return (NULL);
	ft_memcpy(new_word, &s[count_c], i - count_c);
	new_word[i - count_c] = 0;
	return (new_word);
}

static char	**split_of_zero_length(void)
{
	char	**pointer;

	pointer = (char **) malloc(sizeof(char *));
	if (pointer == NULL)
		return (NULL);
	pointer[0] = 0;
	return (pointer);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	int		words;
	int		index;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (split_of_zero_length());
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
