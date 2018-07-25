/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 01:04:02 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 18:19:09 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		error_check(int argc, char **argv);

int		**generate_table(char **argv);

int		sudoku_main_solver(int **grid);

void	print_grid(int **grid);

int		g_found = 0;

int		main(int argc, char **argv)
{
	int	**table;
	int i;

	i = 1;
	if (error_check(argc, argv))
	{
		ft_putstr("Arguments passed do not make a valid Sudoku.\n");
		return (0);
	}
	table = generate_table(argv);
	if (sudoku_main_solver(table))
	{
		ft_putstr("Multiple solutions found! Not a valid Sudoku.\n");
		return (0);
	}
	if (g_found == 1)
	{
		print_grid(table);
		return (0);
	}
	ft_putstr("No solutions possible. Invalid Sudoku.\n");
	return (0);
}
