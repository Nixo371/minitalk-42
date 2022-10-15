/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:06:32 by nucieda-          #+#    #+#             */
/*   Updated: 2022/02/09 19:54:16 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*counter;
	int		i;

	counter = lst;
	i = 1;
	if (lst)
	{
		while (counter->next)
		{
			counter = counter->next;
			i++;
		}
		return (i);
	}
	else
		return (0);
}
