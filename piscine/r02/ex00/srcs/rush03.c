/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:35:02 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:19:35 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*rush03_3(int x, int y, int k, char *rush03)
{
	int i;

	i = 0;
	if (y > 1)
	{
		rush03[k++] = 'A';
		while (i < x - 2)
		{
			rush03[k++] = 'B';
			i++;
		}
		if (x > 1)
			rush03[k++] = 'C';
		rush03[k++] = '\n';
	}
	rush03[k] = '\0';
	return (rush03);
}

char	*rush03_2(int x, int y, int k, char *rush03)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		rush03[k++] = 'B';
		while (j++ < x - 2)
			rush03[k++] = ' ';
		if (x > 1)
			rush03[k++] = 'B';
		rush03[k++] = '\n';
		i++;
	}
	return (rush03_3(x, y, k, rush03));
}

char	*rush03_1(int x, int y, int k, char *rush03)
{
	int i;

	i = 0;
	rush03[k++] = 'A';
	while (i < x - 2)
	{
		rush03[k++] = 'B';
		i++;
	}
	if (x > 1)
		rush03[k++] = 'C';
	rush03[k++] = '\n';
	return (rush03_2(x, y, k, rush03));
}

char	*rush03(int x, int y)
{
	char	*rush03;
	int		k;

	k = 0;
	rush03 = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1);
	if (!(x <= 0 || y <= 0))
		return (rush03_1(x, y, k, rush03));
	rush03[0] = '\0';
	return (rush03);
}
