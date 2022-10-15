/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:20:10 by nucieda-          #+#    #+#             */
/*   Updated: 2021/12/20 02:01:03 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_number(int n, int m, int deg, int neg)
{
	int		pos;

	if (neg == 1 && m == 0)
		return ('-');
	pos = m - neg;
	while (pos++ < deg)
		n = n / 10;
	n = n % 10;
	if (neg == 1)
		n *= -1;
	return (n + 48);
}

static int	set_a(int m)
{
	int	a;

	a = 1;
	while (m / 10)
	{
		m = m / 10;
		a++;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		a;
	int		m;
	int		neg;

	m = n;
	neg = 0;
	if (n < 0)
		neg = 1;
	a = set_a(m);
	number = (char *)malloc(sizeof(char) * (a + neg + 1));
	if (number == NULL)
		return (NULL);
	m = 0;
	while (m < (a + neg))
	{
		number[m] = get_number(n, m, (a - 1), neg);
		m++;
	}
	number[m] = '\0';
	return (number);
}
