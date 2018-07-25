/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 23:25:45 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 23:25:47 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_zero_error(int b, char **argv)
{
	if (b == 0)
	{
		if (*argv[2] == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		else if (*argv[2] == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}
