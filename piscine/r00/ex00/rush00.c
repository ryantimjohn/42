/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 20:05:14 by amyburgh          #+#    #+#             */
/*   Updated: 2018/03/18 16:28:48 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char start, char middle, char end, int middlewidth)
{
	ft_putchar(start);
	while (middlewidth > 0)
	{
		ft_putchar(middle);
		middlewidth--;
	}
	ft_putchar(end);
	ft_putchar('\n');
}

void	ft_putcolumn(char start, char middle, char end, int middleheight)
{
	ft_putchar(start);
	ft_putchar('\n');
	while (middleheight > 0)
	{
		ft_putchar(middle);
		ft_putchar('\n');
		middleheight--;
	}
	ft_putchar(end);
	ft_putchar('\n');
}

void	rush00_loop(int middlewidth, int middleheight)
{
	ft_putline('o', '-', 'o', middlewidth);
	while (middleheight > 0)
	{
		ft_putline('|', ' ', '|', middlewidth);
		middleheight--;
	}
	ft_putline('o', '-', 'o', middlewidth);
}

void	rush(int x, int y)
{
	int middlewidth;
	int middleheight;

	middlewidth = x - 2;
	middleheight = y - 2;
	if (x == 0 || y == 0)
	{
		ft_putchar('\n');
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x == 1)
	{
		ft_putcolumn('o', '|', 'o', middleheight);
	}
	else if (y == 1)
	{
		ft_putline('o', '-', 'o', middlewidth);
	}
	else
		rush00_loop(middlewidth, middleheight);
}
