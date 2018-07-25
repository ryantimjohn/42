/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:23:32 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 22:23:38 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		loop(int j, int size, char *str)
{
	int output;
	int i;

	i = j + 1;
	output = 0;
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		size *= 10;
		i++;
	}
	while (str[j] != '\0' && '0' <= str[j] && str[j] <= '9')
	{
		output += size * (str[j] - 48);
		size /= 10;
		j++;
	}
	return (output);
}

int		ft_atoi(char *str)
{
	int j;
	int size;

	j = 0;
	size = 1;
	while (str[j] <= ' ')
		j++;
	if (str[j] == '-')
	{
		size *= -1;
		j++;
	}
	else if (str[j] == '+')
		j++;
	if (str[j] < '0' || str[j] > '9')
		return (0);
	return (loop(j, size, str));
}
