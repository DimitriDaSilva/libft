/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 09:05:46 by dda-silv          #+#    #+#             */
/*   Updated: 2021/01/28 16:32:26 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split_chars.h"

char			**ft_split_chars(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;

	j = 0;
	g_k = 0;
	if (!(strs = malloc((find_length(str, charset) + 1) * sizeof(char *))))
		return (0);
	while (str[j] != '\0')
	{
		i = j;
		while (!ft_strchr(charset, str[j]) && str[j] != '\0')
			j++;
		if (i != j)
			import_str(strs, &str[i], i, j);
		else
			j++;
	}
	strs[g_k] = 0;
	return (strs);
}

static int		find_length(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str)
		if (!ft_strchr(charset, *str++))
			count++;
	return (count);
}

static void		import_str(char **dest, char *src, int start, int end)
{
	if (!(dest[g_k] = malloc(((end - start + 1) * sizeof(char)))))
		return ;
	ft_strncpy(dest[g_k], src, end - start);
	dest[g_k][end - start] = '\0';
	g_k++;
}
