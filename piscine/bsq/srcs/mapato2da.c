/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapato2da.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:34:58 by tryan             #+#    #+#             */
/*   Updated: 2018/04/02 16:35:00 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**mapato2da(char *input, t_size *size, t_chars *chars)
{
	char	**charmap;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = -1;
	charmap = (char **)malloc(sizeof(charmap) * (size->y + 1));
	while (++i < size->y)
		charmap[i] = (char *)malloc(sizeof(*charmap) * (size->x + 1));
	i = -1;
	while (++i < size->y)
	{
		j = -1;
		while (++j < size->x)
		{
			charmap[i][j] = input[++k];
			if (input[k] != chars->empty && input[k] != chars->obstacle)
				return (0);
		}
		charmap[i][j] = '\0';
		k++;
	}
	return (charmap);
}
