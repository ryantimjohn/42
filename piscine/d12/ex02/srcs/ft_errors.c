/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:16 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 19:35:23 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		ft_missing(void)
{
	ft_putstr("File name missing.\n");
	return (0);
}

int		ft_too_many(void)
{
	ft_putstr("Too many arguments\n");
	return (0);
}

void	ft_open_failed(char *str)
{
	ft_putstr("ft_tail: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_close_failed(void)
{
	ft_putstr("close() failed\n");
}
