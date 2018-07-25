/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printSudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 22:39:36 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 13:55:31 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_grid(int **grid)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			ft_putchar(grid[row][col] + 48);
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
		col = 0;
	}
}
