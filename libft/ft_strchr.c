/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:19:47 by nucieda-          #+#    #+#             */
/*   Updated: 2022/02/08 20:49:02 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c > 256)
		c -= 256;
	if (*str == c)
		return ((char *)str);
	while (*str++)
	{
		if (*str == c)
			return ((char *)str);
	}
	return (0);
}
