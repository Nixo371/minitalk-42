/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:19 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:01:03 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *buf, int ch, size_t length)
{
	unsigned char	*b;
	unsigned char	chr;

	b = (unsigned char *)buf;
	chr = (unsigned char)ch;
	while (length)
	{
		if (*b == chr)
			return ((char *)b);
		length--;
		b++;
	}
	return (NULL);
}
