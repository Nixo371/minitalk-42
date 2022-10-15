/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:05 by nucieda-          #+#    #+#             */
/*   Updated: 2022/02/08 22:12:20 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (dest);
	d = dest;
	s = src;
	if (d < s)
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
