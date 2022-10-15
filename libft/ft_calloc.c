/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:20:54 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:01:07 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset2(void *call, int c, size_t size)
{
	char	*str;

	str = call;
	while (size > 0)
	{
		*str = c;
		str++;
		size--;
	}
	return (0);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*call;

	call = malloc(num * size);
	if (call == NULL)
		return (NULL);
	ft_memset2(call, '\0', num * size);
	return (call);
}
