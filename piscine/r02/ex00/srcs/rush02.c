/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:21:35 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:21:54 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*rush02_3(int x, int y, int k, char *rush02)
{
	int i;

	i = 0;
	if (y > 1)
	{
		rush02[k++] = 'C';
		while (i < x - 2)
		{
			rush02[k++] = 'B';
			i++;
		}
		if (x > 1)
			rush02[k++] = 'C';
		rush02[k++] = '\n';
	}
	rush02[k] = '\0';
	return (rush02);
}

char	*rush02_2(int x, int y, int k, char *rush02)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		rush02[k++] = 'B';
		while (j++ < x - 2)
			rush02[k++] = ' ';
		if (x > 1)
			rush02[k++] = 'B';
		rush02[k++] = '\n';
		i++;
	}
	return (rush02_3(x, y, k, rush02));
}

char	*rush02_1(int x, int y, int k, char *rush02)
{
	int i;

	i = 0;
	rush02[k++] = 'A';
	while (i < x - 2)
	{
		rush02[k++] = 'B';
		i++;
	}
	if (x > 1)
		rush02[k++] = 'A';
	rush02[k++] = '\n';
	return (rush02_2(x, y, k, rush02));
}

char	*rush02(int x, int y)
{
	char	*rush02;
	int		k;

	k = 0;
	rush02 = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1);
	if (!(x <= 0 || y <= 0))
		return (rush02_1(x, y, k, rush02));
	rush02[0] = '\0';
	return (rush02);
}
