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
	while (i > 0)
	{
		i--;
		free(pointer[i]);
	}
	free(pointer);
}

static void	split(char **pointer, char *s, char *c, unsigned int p_i)
{
	unsigned int	i;
	char			*trimmed_sub_string;

	i = 0;
	while (s[i] != 0 && s[i] != c[0])
		i++;
	if (i != 0)
	{
		pointer[p_i] = (char *) malloc(i + 1);
		if (pointer[p_i] == NULL)
		{
			clear_mem(pointer, p_i);
			return ;
		}
		if (sizeof(pointer[p_i]) > 1)
		{
			ft_memcpy(pointer[p_i], s, i);
			pointer[p_i][i] = 0;
		}
	}
	if (i == ft_strlen(s))
		return ;
	trimmed_sub_string = (char *) ft_strtrim(&s[i], c);
	split(pointer, trimmed_sub_string, c, p_i + 1);
	free(trimmed_sub_string);
}

static char	**split_of_zero_length(void)
{
	char	**pointer;
	pointer = (char **) malloc(sizeof(char *));
	pointer[0] = 0;
	return pointer;
}
char	**ft_split(char const *s, char c)
{
	char	**pointer;
	char	*str;
	char	ch[2];
	int		words;

	ch[0] = c;
	ch[1] = 0;
	if (ft_strlen(s) == 0)
		return (split_of_zero_length());
	str = (char *) s;
	str = (char *) ft_strtrim(str, ch);
	if (str == NULL)
		return (NULL);
	words = count_words(str, c);
	pointer = (char **) malloc((words + 1) * sizeof(char *));
	if (pointer == NULL)
	{
		free(str);
		return (NULL);
	}
	split(pointer, str, ch, 0);
	pointer[words] = NULL;
	free(str);
	return (pointer);
}
