/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addobstacles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:10:22 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/04 15:10:51 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**addobstacles(char **charmap, t_chars *chars, int **map, t_size *size)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = -1;
	while (++i < size->y)
	{
		j = -1;
		while (++j < size->x)
		{
			if (charmap[i][j] == chars->obstacle)
			{
				k = -1;
				while (++k + i < size->y)
				{
					l = -1;
					while (++l + j < size->x)
						map[i + k][j + l] += 1;
				}
			}
		}
	}
	return (map);
}
