/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:10:45 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/03 11:10:48 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	call_increase(int i, int j, t_size *size, t_b *b)
{
	b->size += 1;
	b->row = i;
	b->col = j;
}

int		table_check(int **intmap, t_b *b, int i, int j)
{
	if (j == 0 && i == 0)
	{
		if (intmap[i + b->size][j + b->size] == 0)
			return (1);
	}
	else if (j != 0 && i == 0)
	{
		if (intmap[i + b->size][j + b->size] - intmap[i + b->size][j - 1] == 0)
			return (1);
	}
	else if (i != 0 && j == 0)
	{
		if (intmap[i + b->size][j + b->size] - intmap[i - 1][j + b->size] == 0)
			return (1);
	}
	else if (intmap[i + b->size][j + b->size] - intmap[i + b->size][j - 1]
					- intmap[i - 1][j + b->size] + intmap[i - 1][j - 1] == 0)
		return (1);
	return (0);
}

void	checktable(int **intmap, t_size *size, t_b *b)
{
	int i;
	int j;

	i = -1;
	while (++i + b->size < size->y)
	{
		j = 0;
		while (j + b->size < size->x)
		{
			if (table_check(intmap, b, i, j))
				call_increase(i, j, size, b);
			else
				j++;
		}
	}
}
