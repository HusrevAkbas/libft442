/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:58:53 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/03 15:58:56 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	r;
	if (argc > 1)
	{
		r = ft_isalpha('/');
		printf("%d", r);
	}
}*/
