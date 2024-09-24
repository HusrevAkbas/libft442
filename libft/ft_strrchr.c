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

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	char	*pointer_to_char;

	pointer = (char *) s;
	while (*pointer)
	{
		if (*pointer == c)
			pointer_to_char = pointer;
		pointer++;
	}
	if (*pointer == '\0' && c == '\0')
		return (pointer);
	if (*pointer)
		return (pointer_to_char);
	else
		return (0);
}
