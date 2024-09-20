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

static void	split(char **p, char *s, char *c, unsigned int p_i)
{
	unsigned int	i;
	char			*sub_string;
	char			*trimmed_sub_string;

	i = 0;
	while (s[i] && s[i] != c[0])
		i++;
	if (i != 0)
	{
		p[p_i] = ft_calloc(i, sizeof(char));
		ft_memcpy(p[p_i], s, i);
	}
	if (i == ft_strlen(s))
		return ;
	sub_string = ft_substr(s, i, ft_strlen(s));
	trimmed_sub_string = ft_strtrim(sub_string, c);
	split(p, trimmed_sub_string, c, p_i + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	*m;
	char	ch[2];
	int		words;

	ch[0] = c;
	ch[1] = 0;
	if (ft_strlen(s) < 2)
		return (0);
	m = (char *) s;
	m = ft_strtrim(m, ch);
	words = count_words(m, c);
	p = (char **)ft_calloc(words, sizeof(char *));
	split(p, m, ch, 0);
	return (p);
}
