/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:32:17 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:21:17 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*rush00_3(int x, int y, int k, char *rush00)
{
	int i;

	i = 0;
	if (y > 1)
	{
		rush00[k++] = 'o';
		while (i < x - 2)
		{
			rush00[k++] = '-';
			i++;
		}
		if (x > 1)
			rush00[k++] = 'o';
		rush00[k++] = '\n';
	}
	rush00[k] = '\0';
	return (rush00);
}

char	*rush00_2(int x, int y, int k, char *rush00)
{
	int i;
	int j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		rush00[k++] = '|';
		while (j++ < x - 2)
			rush00[k++] = ' ';
		if (x > 1)
			rush00[k++] = '|';
		rush00[k++] = '\n';
		i++;
	}
	return (rush00_3(x, y, k, rush00));
}

char	*rush00_1(int x, int y, int k, char *rush00)
{
	int i;

	i = 0;
	rush00[k++] = 'o';
	while (i < x - 2)
	{
		rush00[k++] = '-';
		i++;
	}
	if (x > 1)
		rush00[k++] = 'o';
	rush00[k++] = '\n';
	return (rush00_2(x, y, k, rush00));
}

char	*rush00(int x, int y)
{
	char	*rush00;
	int		k;

	k = 0;
	rush00 = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1);
	if (!(x <= 0 || y <= 0))
		return (rush00_1(x, y, k, rush00));
	rush00[0] = '\0';
	return (rush00);
}
