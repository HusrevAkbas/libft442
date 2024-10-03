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
// printf("clear mem: %p  i: %i, p[i]: %p\n", pointer, i, pointer[i]);
		free(pointer[i]);
// printf("clear mem: %p  i: %i\n", pointer, i);
		i--;
	}
// printf("clear mem after while: %p  i: %i\n", pointer, i);
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
// printf("before while --- word: %zu, index: %zu, s: %s, c: %c\n", word, index, s, c);
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
// printf("after count count: %zu, i: %zu sc: %s, si: %s\n", count_c, i, &s[count_c], &s[i]);
// printf("i got new word %p pointer p %p, pointer[index]%p\n", new_word, pointer, pointer[index]);
		pointer[index] = ft_substr(s, count_c, i - count_c);
		if (pointer[index] == NULL)
		{
			pointer = clear_mem(pointer, index);
			return (pointer);
		}
		index++;
// printf("after while: new: %s\n", new_word);
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
// printf("before split p: %p pi %p\n", pointer, pointer[index]);
	pointer = split(pointer, str, c, words);
// printf("------------end of fun----------\n");
	return (pointer);
}
