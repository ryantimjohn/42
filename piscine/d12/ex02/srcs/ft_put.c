/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:20:51 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 19:35:15 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putfilename(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}

void	ft_putbuffer(void)
{
	char buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}
