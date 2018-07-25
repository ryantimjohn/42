/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:19:29 by tryan             #+#    #+#             */
/*   Updated: 2018/03/21 18:36:51 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	if (max - min < 0)
		return ((void *)0);
	i = 0;
	range = (int*)malloc(sizeof(*range) * (max - min));
	while (i < max - min)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
