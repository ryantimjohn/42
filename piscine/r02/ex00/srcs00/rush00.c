/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s-rush00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 15:42:42 by shlee             #+#    #+#             */
/*   Updated: 2018/04/01 15:45:04 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (i * j == 1 || i * j == x * y)
				ft_putchar('o');
			else if ((i == x && j == 1) || (j == y && i == 1))
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
