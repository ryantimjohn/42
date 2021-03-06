/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findZero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:37:52 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 13:59:37 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_zero(int **grid, int *row, int *col)
{
	while (*row < 9)
	{
		while (*col < 9)
		{
			if (grid[*row][*col] == 0)
				return (0);
			*col += 1;
		}
		*col = 0;
		*row += 1;
	}
	return (1);
}
