/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:09:14 by tryan             #+#    #+#             */
/*   Updated: 2018/04/02 14:09:15 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		solve_map(char *input)
{
	char	**charmap;
	int		**intmap;
	t_size	*size;
	t_chars	*chars;
	t_b		*b;

	size = (t_size *)malloc(sizeof(t_size));
	chars = (t_chars *)malloc(sizeof(t_chars));
	charmap = (char **)malloc(sizeof(charmap));
	intmap = (int **)malloc(sizeof(intmap));
	b = (t_b *)malloc(sizeof(b));
	if (!(input = first_line(input, chars)))
		return (0);
	if (!(size_check(input, size, chars)))
		return (0);
	if (!(charmap = mapato2da(input, size, chars)))
		return (0);
	if (!(intmap = mapatoi(size)))
		return (0);
	if (!(intmap = addobstacles(charmap, chars, intmap, size)))
		return (0);
	checktable(intmap, size, b);
	charmap = fillmap(charmap, b, size, chars);
	printtable(charmap, size);
	return (1);
}

int		main(int argc, char *argv[])
{
	char	*input;
	int		i;

	i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			input = read_files(argv[i]);
			if (!(solve_map(input)))
				ft_putstr("map error\n");
			if (argv[i + 1])
				ft_putchar('\n');
		}
	}
	else
	{
		input = read_stdinput();
		if (!(solve_map(input)))
			ft_putstr("map error\n");
		return (0);
	}
	return (0);
}
