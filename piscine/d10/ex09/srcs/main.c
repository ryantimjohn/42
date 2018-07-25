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
#include "ft_opp.h"

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;
	int	output;

	i = -1;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_zero_error(b, argv))
		return (0);
	while (!output && i < 5)
		if (*g_opptab[++i].opp == *argv[2])
			output = g_opptab[i].funptr(a, b);
	if (i == 5)
	{
		ft_usage(a, b);
		return (0);
	}
	ft_putnbr(output);
	ft_putchar('\n');
	return (0);
}
