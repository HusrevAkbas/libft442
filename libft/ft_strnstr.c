/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:59:51 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/03 15:59:54 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	char	*big_index;

	b = (char *) big;
	if (ft_strlen (little) == 0)
		return (b);
	while (ft_strlen(little) <= len && *b)
	{
		l = (char *) little;
		if (*b == *l)
		{
			big_index = b;
			while (*big_index == *l)
			{
				big_index++;
				l++;
				if (*l == 0)
					return (b);
			}
		}
		b++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%d", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
	return (42);
}*/
