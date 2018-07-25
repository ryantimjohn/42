/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:16 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 15:22:18 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	ft_missing(void)
{
	ft_putstr("File name missing.\n");
	return (0);
}

int	ft_too_many(void)
{
	ft_putstr("Too many arguments\n");
	return (0);
}

int	ft_open_failed(void)
{
	ft_putstr("open() failed\n");
	return (0);
}

int	ft_close_failed(void)
{
	ft_putstr("close() failed\n");
	return (0);
}
