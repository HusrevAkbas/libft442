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
	pointer = NULL;
}

static void	split(char **pointer, char *s, char c, int *p_i)
{
	size_t	i;
	size_t	count_c;

	i = 0;
	count_c = 0;
	while (s[i] != 0 && s[i++] == c)
		count_c++;
	while (s[i] != 0 && s[i] != c)
		i++;
	if (count_c == ft_strlen(s))
		return ;
	pointer[*p_i] = (char *) malloc(i - count_c + 1);
	if (pointer[*p_i] == NULL)
	{
		*p_i = -1;
		return ;
	}
	ft_memcpy(pointer[*p_i], &s[count_c], i - count_c);
	pointer[*p_i][i - count_c] = 0;
	if (i == ft_strlen(s))
		return ;
	*p_i += 1;
	split(pointer, &s[i], c, p_i);
}

static char	**split_of_zero_length(void)
{
	char	**pointer;

	pointer = (char **) malloc(sizeof(char *));
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
	split(pointer, str, c, &index);
	if (index == -1)
		clear_mem(pointer, words);
	if (pointer != NULL)
		pointer[words] = NULL;
	return (pointer);
}
// int main(void)
// {
// 	char **p;
// 	int i = 0;

// 	p = ft_split("some values to delimitered bym", 'm');
// 	while (p[i])
// 	{
// 		free(p[i]);
// 		i++;
// 	}
// 	free(p);
// }