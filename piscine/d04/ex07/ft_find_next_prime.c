/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 13:14:32 by tryan             #+#    #+#             */
/*   Updated: 2018/03/17 13:14:40 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb <= 1)
	{
		return (0);
	}
	while (i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int prime;
	int adder;

	prime = 0;
	adder = -1;
	while (prime == 0)
	{
		adder++;
		prime = ft_is_prime(nb + adder);
	}
	return (nb + adder);
}
