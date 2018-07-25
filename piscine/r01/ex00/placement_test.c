/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placementTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:37:29 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 15:28:32 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	placement_test(int **grid, int row, int col, int new)
{
	int i;
	int j;
	int box_row;
	int box_col;

	i = 0;
	j = 0;
	while (j < 9)
		if (grid[row][j++] == new)
			return (0);
	j = 0;
	while (i < 9)
		if (grid[i++][col] == new)
			return (0);
	i = -1;
	box_row = (row - row % 3);
	box_col = (col - col % 3);
	while (++i < 3)
	{
		while (j < 3)
			if (grid[box_row + i][box_col + j++] == new)
				return (0);
		j = 0;
	}
	return (1);
}
