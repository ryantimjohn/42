/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapatoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:09:33 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/02 15:09:35 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**mapatoi(t_size *size)
{
	int		**map;
	int		i;
	int		j;

	i = 0;
	map = (int **)malloc(sizeof(map) * (size->y));
	while (i < size->y)
		map[i++] = (int*)malloc(sizeof(*map) * (size->x));
	i = 0;
	while (i < size->y)
	{
		j = 0;
		while (j < size->x)
			map[i][j++] = 0;
		i++;
	}
	return (map);
}
