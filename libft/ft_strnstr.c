/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:44 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:00:48 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fullcomp(const char *b, const char *little, size_t size)
{
	while (*b == *little && *little != '\0')
	{
		if (size == 0)
			return (0);
		b++;
		little++;
		size--;
	}
	if (*little != '\0')
		return (0);
	else
		return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	const char	*b;

	b = big;
	if (little[0] == '\0')
		return ((char *)b);
	while (size > 0 && *big != '\0')
	{
		if (*big == *little)
		{
			b = big;
			if (ft_fullcomp(b, little, size) == 1)
				return ((char *)b);
		}
		big++;
		size--;
	}
	return (0);
}
