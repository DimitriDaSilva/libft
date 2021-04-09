/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:12:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/09 11:42:45 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_print_s(t_list *lst)
{
	t_list	*tmp;

	if (lst == 0)
	{
		printf("List empty\n");
		return ;
	}
	tmp = lst;
	while (tmp->next)
	{
		printf("\"%s\" -", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\"%s\"\n", (char *)tmp->content);
}
