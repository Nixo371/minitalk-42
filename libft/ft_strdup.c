/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:54 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:00:55 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memcpy2(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n != '\0')
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

static size_t	ft_strlen2(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	void	*dup;

	size = ft_strlen2 (s) + 1;
	dup = malloc (size);
	if (dup == NULL)
		return (NULL);
	return ((char *)ft_memcpy2(dup, s, size));
}
