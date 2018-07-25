/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:20:23 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:22:37 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush_2.h>

void	ft_reverse(char *str, int length)
{
	int		start;
	int		end;
	char	*temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		*temp = str[end];
		str[end--] = str[start];
		str[start++] = *temp;
	}
}

char	*ft_itoa(int num)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	i = 0;
	if (num == 0)
		return ("0");
	while (num != 0)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}
	str[i] = '\0';
	ft_reverse(str, i);
	return (str);
}
