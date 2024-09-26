/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:58:33 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/03 15:58:37 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_num(int a, int b)
{
	a *= 10;
	a -= b;
	return (a);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	is_n;

	a = 0;
	is_n = -1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (!ft_isdigit(str[1]) && !ft_isdigit(str[0]))
		return (0);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_n *= -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		b = *str - 48;
		a = set_num(a, b);
		str++;
	}
	return (is_n * a);
}
