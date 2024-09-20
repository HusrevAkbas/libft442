/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:23:39 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/19 14:23:40 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num_as_str;

	num_as_str = ft_itoa(n);
	// check if itoa failed
	ft_putstr_fd(num_as_str, fd);
	free(num_as_str);
}
