/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:11:47 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 14:16:14 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*output;

	i = 0;
	output = (int*)malloc(sizeof(output) * length);
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}
