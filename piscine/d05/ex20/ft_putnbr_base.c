/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 00:25:43 by tryan             #+#    #+#             */
/*   Updated: 2018/03/20 00:50:01 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putnbr_base(int nbr, char *base)
{
	int bsize;

	bsize = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (base[bsize] != '\0')
		bsize++;
	while (nbr != 0)
	{
	ft_putchar(base[nbr % bsize]);
	nbr /= bsize;
	}
}
