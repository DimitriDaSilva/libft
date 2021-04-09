/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:12:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/09 15:10:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_print_s(t_list *lst)
{
	t_list	*tmp;

	if (lst == 0)
		return ;
	tmp = lst;
	while (tmp->next)
	{
		printf("\"%s\" -", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf(" \"%s\"\n", (char *)tmp->content);
}

void	ft_lst_print_d(t_list *lst)
{
	if (lst == 0)
		return ;
	while (lst->next)
	{
		printf("[%ld]-", (long int)lst->content);
		lst = lst->next;
	}
	printf("[%ld]\n", (long int)lst->content);
}
