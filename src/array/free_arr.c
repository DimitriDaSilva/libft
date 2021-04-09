/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 08:54:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/04/09 08:56:54 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free a NULL terminated array
** @param:	- [void **] ptr of arr
*/

void	free_arr(void **ptr)
{
	int	i;

	i = 0;
	while (ptr[i - 1])
		free(ptr[i++]);
	free(ptr);
}