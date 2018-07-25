/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:36:09 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:18:51 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*rush04_3(int x, int y, int k, char *rush04)
{
	int i;

	i = 0;
	if (y > 1)
	{
		rush04[k++] = 'C';
		while (i < x - 2)
		{
			rush04[k++] = 'B';
			i++;
		}
		if (x > 1)
			rush04[k++] = 'A';
		rush04[k++] = '\n';
	}
	rush04[k] = '\0';
	return (rush04);
}

char	*rush04_2(int x, int y, int k, char *rush04)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		rush04[k++] = 'B';
		while (j++ < x - 2)
			rush04[k++] = ' ';
		if (x > 1)
			rush04[k++] = 'B';
		rush04[k++] = '\n';
		i++;
	}
	return (rush04_3(x, y, k, rush04));
}

char	*rush04_1(int x, int y, int k, char *rush04)
{
	int i;

	i = 0;
	rush04[k++] = 'A';
	while (i < x - 2)
	{
		rush04[k++] = 'B';
		i++;
	}
	if (x > 1)
		rush04[k++] = 'C';
	rush04[k++] = '\n';
	return (rush04_2(x, y, k, rush04));
}

char	*rush04(int x, int y)
{
	char	*rush04;
	int		k;

	k = 0;
	rush04 = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1);
	if (!(x <= 0 || y <= 0))
		return (rush04_1(x, y, k, rush04));
	rush04[0] = '\0';
	return (rush04);
}
