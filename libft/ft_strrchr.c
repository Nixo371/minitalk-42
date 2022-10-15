/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:18:43 by nucieda-          #+#    #+#             */
/*   Updated: 2022/02/08 21:06:36 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pointer;

	pointer = 0;
	while (c > 256)
		c -= 256;
	if (*str == c)
		pointer = (char *)str;
	while (*str++)
	{
		if (*str == c)
			pointer = (char *)str;
	}
	return (pointer);
}
