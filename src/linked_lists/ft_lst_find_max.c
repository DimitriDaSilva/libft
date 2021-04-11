/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:03:33 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/11 10:10:55 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_find_max(t_list *lst)
{
	int	max;

	max = (long int)lst->data;
	while (lst)
	{
		if (max < (long int)lst->data)
			max = (long int)lst->data;
		lst = lst->next;
	}
	return (max);
}
