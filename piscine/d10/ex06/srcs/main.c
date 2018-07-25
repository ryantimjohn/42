/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:28:46 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 19:11:03 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int (*g_funptr[])(int, int) = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*sym;
	int		i;

	sym = "+-*/%";
	i = 0;
	if (argc != 4)
		return (0);
	while (sym[i] && sym[i] != *argv[2])
		i++;
	if (i == 5)
	{
		ft_putstr("0\n");
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_zero_error(b, argv))
		return (0);
	ft_putnbr(g_funptr[i](a, b));
	ft_putchar('\n');
	return (0);
}
