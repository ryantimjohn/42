/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 12:46:30 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/25 13:59:09 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

int		**generate_table(char **argv)
{
	int	**table;
	int	i;
	int	j;

	i = 0;
	j = 0;
	argv++;
	table = (int**)malloc(sizeof(table) * 9);
	while (i < 9)
	{
		table[i] = (int*)malloc(sizeof(table[i]) * 9);
		while (j < 9)
		{
			if (argv[i][j] == '.')
				table[i][j] = 0;
			else
				table[i][j] = argv[i][j] - 48;
			j++;
		}
		i++;
		j = 0;
	}
	return (table);
}
