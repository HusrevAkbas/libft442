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

	i = 0;
	word = 1;
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
		i++;
	}
	free(pointer);
	pointer = NULL;
}

static void	split(char **pointer, char *s, char *c, unsigned int p_i)
{
	unsigned int	i;
	char			*sub_string;
	char			*trimmed_sub_string;

	i = 0;
	while (s[i] != 0 && s[i] != c[0])
		i++;
	if (i != 0)
	{
		pointer[p_i] = ft_calloc(i, sizeof(char));
		if (pointer[p_i] == NULL)
		{
			clear_mem(pointer, p_i);
			return ;
		}
		ft_memcpy(pointer[p_i], s, i);
	}
	if (i == ft_strlen(s))
		return ;
	sub_string = ft_substr(s, i, ft_strlen(s));
	trimmed_sub_string = ft_strtrim(sub_string, c);
	split(pointer, trimmed_sub_string, c, p_i + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	char	ch[2];
	int		words;

	ch[0] = c;
	ch[1] = 0;
	if (ft_strlen(s) < 2)
		return (0);
	str = (char *) s;
	str = ft_strtrim(str, ch);
	words = count_words(str, c);
	pointer = (char **)ft_calloc(words, sizeof(char *));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	split(pointer, str, ch, 0);
	return (pointer);
}
