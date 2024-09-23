/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:43 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/18 13:38:45 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_chars(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	set_mem(char *p, int n, int index)
{
	int	last_digit;

	last_digit = n % 10;
	if (n >= 10)
		set_mem(p, n / 10, index - 1);
	p[index] = '0' + last_digit;
}

char	*ft_itoa(int n)
{
	char	*p;
	int		last_digit;
	int		sign;
	int		count_char;

	sign = 1;
	last_digit = n % 10;
	count_char = count_chars(n);
	if (n < 0)
	{
		sign *= -1;
		last_digit *= -1;
		count_char += 1;
	}
	p = ft_calloc(count_char + 1, sizeof(char));
	set_mem(p, (n / 10) * sign, count_char - 2);
	if (sign < 0)
		p[0] = '-';
	p[count_char -1] = '0' + last_digit;
	return (p);
}
