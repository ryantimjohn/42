/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 00:52:30 by tryan             #+#    #+#             */
/*   Updated: 2018/03/20 01:33:04 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int	exponent;
	int bsize;
	int bnum;
	int total;

	i = 0;
	bsize = 0;
	bnum = 0;
	total = 0;
	while (base[bsize] != '\0')
		bsize++;
	exponent = bsize;
	while (str[i] != '\0')
	{
		exponent *= bsize;
		i++;
	}
	while (str[j] != '\0')
	{
		exponent /= bsize;
		while (str[j] != base[bnum])
			bnum++;
		total += exponent * bnum;
		j++;
		bnum = 0
	}
	return total;
}
