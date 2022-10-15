/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:19:32 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:00:51 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeof(const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;

	d = dst;
	s = src;
	n = size;
	if (n == 0)
		return (ft_sizeof(src));
	while (*s != '\0' && n > 1)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	*d = '\0';
	return (ft_sizeof(src));
}
