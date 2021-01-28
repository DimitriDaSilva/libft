/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_chars.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:40:26 by dda-silv          #+#    #+#             */
/*   Updated: 2021/01/28 15:41:05 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_CHARS_H
# define FT_SPLIT_CHARS_H

# include "libft.h"

static int		find_length(char *str, char *charset);
static void		import_str(char **dest, char *src, int start, int end);

int g_k;

#endif
