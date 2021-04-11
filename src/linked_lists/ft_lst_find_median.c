/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_median.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:10:23 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/11 16:24:55 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst_find_median.h"

long long			ft_lst_find_median(t_list *lst)
{
	t_list *dup;

	dup = ft_lstdup(lst);
	ft_lst_print_d(dup);
	ft_lst_sort(&dup, ascending);
	ft_lst_print_d(dup);
	ft_lstclear(&dup, ft_lstdel_int);
	return (3);
}
