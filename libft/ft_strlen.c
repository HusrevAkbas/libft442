/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:59:35 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/03 15:59:38 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

/*
int	main()
{
	char	string[] =  "Solar System";
	size_t length = ft_strlen(string);
	return 0;
}*/