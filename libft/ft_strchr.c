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
	char	*p;

	p = (char *) s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (*p == '\0' && c == '\0')
		return (p);
	return (0);
}
