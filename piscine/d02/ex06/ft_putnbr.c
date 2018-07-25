/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_run.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 03:06:02 by tryan             #+#    #+#             */
/*   Updated: 2018/03/15 03:06:07 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_edge(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	print_number(int nb)
{
	char	d;
	int		temp;
	int		size;

	d = '0';
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	temp = nb;
	size = 1;
	while ((temp / 10) > 0)
	{
		temp /= 10;
		size *= 10;
	}
	temp = nb;
	while (temp > 0)
	{
		ft_putchar(d + temp / size);
		temp %= size;
		size /= 10;
		d = '0';
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0')
	}
	else if (nb == -2147483648)
	{
		print_edge();
	}
	else
	{
		print_number(nb);
	}
}
