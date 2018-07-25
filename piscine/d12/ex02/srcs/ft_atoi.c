/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 23:09:50 by tryan             #+#    #+#             */
/*   Updated: 2018/03/29 23:10:03 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	ft_atoi(char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (*str > '\0' && *str <= ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (str[0] >= 48 && str[0] <= 57)
	{
		value = value * 10 + (str[0] - '0');
		str++;
	}
	return (value * sign);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
