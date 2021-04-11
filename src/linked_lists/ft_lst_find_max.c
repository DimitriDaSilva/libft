/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:03:33 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/11 16:14:31 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_lst_find_max(t_list *lst)
{
	long long	max;

	max = (long long int)lst->data;
	while (lst)
	{
		if (max < (long long int)lst->data)
			max = (long long int)lst->data;
		lst = lst->next;
	}
	return (max);
}
