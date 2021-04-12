/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:47:53 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/12 14:47:54 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_lst_get_min(t_list *lst)
{
	long long	min;

	min = (long long int)lst->data;
	while (lst)
	{
		if ((long long int)lst->data < min)
			min = (long long int)lst->data;
		lst = lst->next;
	}
	return (min);
}
