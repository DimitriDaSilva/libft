/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:06:59 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/11 10:10:54 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_find_min(t_list *lst)
{
	int	min;

	min = (long int)lst->data;
	while (lst)
	{
		if ((long int)lst->data < min)
			min = (long int)lst->data;
		lst = lst->next;
	}
	return (min);
}
