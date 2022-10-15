/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:10 by nucieda-          #+#    #+#             */
/*   Updated: 2022/01/19 18:46:49 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	check_trim(char const *s1, char const *set, int i)
{
	while (*set)
	{
		if (i < 0)
			return (0);
		else if (s1[i] == *set)
			return (1);
		else
			set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		newlen;
	int		i;
	int		j;

	newlen = ft_strlen(s1);
	i = newlen;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (check_trim(s1, set, --i))
		newlen--;
	i = -1;
	while (check_trim(s1, set, ++i))
		newlen--;
	if (newlen < 0)
		newlen = 0;
	str = malloc((newlen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (newlen-- > 0)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
