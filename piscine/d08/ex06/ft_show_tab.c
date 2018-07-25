/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 20:43:52 by tryan             #+#    #+#             */
/*   Updated: 2018/03/23 21:08:51 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483647)
		ft_putstr("2147483647");
	else if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	j;

	while (par && par->str)
	{
		j = 0;
		ft_putstr(par->str);
		ft_putnbr(par->size_param);
		while (par->tab[j])
		{
			ft_putstr(par->tab[j]);
			j++;
		}
		par++;
	}
}
