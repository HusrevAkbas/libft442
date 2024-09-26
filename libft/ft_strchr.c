/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:54:35 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/09 14:54:37 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;
	int		size;
	int		i;

	i = 0;
	size = sizeof(s);
	pointer = (char *) s;
	while (i < size)
	{
		if (pointer[i] == c)
			return (&pointer[i]);
		i++;
	}
	// if (*pointer == '\0' && c == '\0')
	// 	return (pointer);
	return (0);
}
