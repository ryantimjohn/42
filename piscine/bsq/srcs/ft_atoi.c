/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:57:16 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/03 14:57:18 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		res;
	int		n;
	int		sign;

	sign = 1;
	res = 0;
	n = 0;
	while ((str[n] == ' ') || (str[n] == '\t') || (str[n] == '\n')
		|| (str[n] == '\v') || (str[n] == '\f') || (str[n] == '\r'))
	{
		n++;
	}
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign = -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + (str[n] - '0');
		n++;
	}
	return (sign * res);
}
