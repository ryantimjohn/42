/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_run.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 01:58:55 by tryan             #+#    #+#             */
/*   Updated: 2018/03/15 01:59:06 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	loop(int m, int n)
{
	while (m <= 98)
	{
		while (n <= 99)
		{
			ft_putchar(i + (m / 10));
			ft_putchar(i + (m % 10));
			ft_putchar(' ');
			ft_putchar(i + (n / 10));
			ft_putchar(i + (n % 10));
			if (m != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n++;
		}
		m++;
		n = m + 1;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	int		m;
	int		n;

	i = '0';
	m = 0;
	n = 1;
	loop(m, n);
}
