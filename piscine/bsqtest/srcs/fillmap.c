/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:19:17 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/04 15:19:19 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**fillmap(char **charmap, t_b *b, t_size *size, t_chars *chars)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	while (++i < size->y)
	{
		j = -1;
		while (++j < size->x)
		{
			if (i == b->row && j == b->col)
			{
				k = -1;
				while (++k < b->size)
				{
					l = -1;
					while (++l < b->size)
						charmap[i + k][j + l] = chars->full;
				}
				return (charmap);
			}
		}
	}
	return (charmap);
}
