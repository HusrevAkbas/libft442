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

#include "libft.h" // DELETE THIS

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
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
