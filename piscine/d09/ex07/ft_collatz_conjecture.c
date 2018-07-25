/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 05:25:57 by tryan             #+#    #+#             */
/*   Updated: 2018/03/23 05:40:31 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_step(num)
{
	if (num%2 == 0)
		return (num/2);
	return (num * 3 + 1);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	i;

	i = 0;
	while (base != 1)
	{
		base = ft_collatz_step(base);
		i++;
	}
	return (i);
}
