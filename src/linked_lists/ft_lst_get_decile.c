/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_decile.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:48:03 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/15 13:30:11 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_lst_get_decile(t_list *lst, int dcl_picked)
{
	t_list		*dup;
	t_list		*tmp;
	int			qrtl;
	long long	ret;

	if (1 < dcl_picked && dcl_picked < 10)
		return (0);
	dup = ft_lstdup(lst);
	qrtl = ft_lstsize(dup) * dcl_picked / 4;
	ft_lst_sort(&dup, ascending);
	tmp = dup;
	while (qrtl--)
		tmp = tmp->next;
	ret = (long long)tmp->data;
	ft_lstclear(&dup, ft_lstdel_int);
	return (ret);
}
