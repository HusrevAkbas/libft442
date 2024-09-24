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
	char	*new_big;
	char	*new_little;
	char	*big_index;

	new_big = (char *) big;
	if (ft_strlen (little) == 0)
		return (new_big);
	while (ft_strlen(little) <= len && *new_big)
	{
		new_little = (char *) little;
		if (*new_big == *new_little)
		{
			big_index = new_big;
			while (*big_index == *new_little)
			{
				big_index++;
				new_little++;
				if (*new_little == 0)
					return (new_big);
			}
		}
		new_big++;
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
