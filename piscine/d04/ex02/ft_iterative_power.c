/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 09:46:28 by tryan             #+#    #+#             */
/*   Updated: 2018/03/17 09:49:25 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int output;

	i = power;
	output = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i > 0)
	{
		output *= nb;
		i--;
	}
	return (output);
}
