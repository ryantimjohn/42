/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 18:49:39 by tryan             #+#    #+#             */
/*   Updated: 2018/03/21 18:57:41 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *ptr;

	i = 0;
	if (max - min <= 0)
	{
		*range = ((void *)0);
		return (0);
	}
	ptr = (int*)malloc(sizeof(*ptr) * (max - min));
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}
