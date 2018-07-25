/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:18:19 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:18:23 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*rush01_3(int x, int y, int k, char *rush01)
{
	int i;

	i = 0;
	if (y > 1)
	{
		rush01[k++] = '\\';
		while (i < x - 2)
		{
			rush01[k++] = '*';
			i++;
		}
		if (x > 1)
			rush01[k++] = '/';
		rush01[k++] = '\n';
	}
	rush01[k] = '\0';
	return (rush01);
}

char	*rush01_2(int x, int y, int k, char *rush01)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		rush01[k++] = '*';
		while (j++ < x - 2)
			rush01[k++] = ' ';
		if (x > 1)
			rush01[k++] = '*';
		rush01[k++] = '\n';
		i++;
	}
	return (rush01_3(x, y, k, rush01));
}

char	*rush01_1(int x, int y, int k, char *rush01)
{
	int i;

	i = 0;
	rush01[k++] = '/';
	while (i < x - 2)
	{
		rush01[k++] = '*';
		i++;
	}
	if (x > 1)
		rush01[k++] = '\\';
	rush01[k++] = '\n';
	return (rush01_2(x, y, k, rush01));
}

char	*rush01(int x, int y)
{
	char	*rush01;
	int		k;

	k = 0;
	rush01 = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1);
	if (!(x <= 0 || y <= 0))
		return (rush01_1(x, y, k, rush01));
	rush01[0] = '\0';
	return (rush01);
}
