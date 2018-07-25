/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuMainSolver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:38:48 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 18:15:07 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_zero(int **grid, int *row, int *col);

int	placement_test(int **grid, int row, int col, int new);

int	multiple_sol_check(void);

int	sudoku_main_solver(int **grid)
{
	int *row;
	int *col;
	int new;

	row = (int*)malloc(sizeof(int) * 1);
	col = (int*)malloc(sizeof(int) * 1);
	*row = 0;
	*col = 0;
	new = 1;
	if (find_zero(grid, row, col))
		return (multiple_sol_check());
	while (new <= 9)
	{
		if (placement_test(grid, *row, *col, new))
		{
			grid[*row][*col] = new;
			if (sudoku_main_solver(grid))
				return (1);
			grid[*row][*col] = 0;
		}
		new++;
	}
	return (0);
}
