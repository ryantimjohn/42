/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:43:34 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 23:18:06 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"
#include <stdio.h>
#include <string.h>

void	mem_location(int num)
{
	char	*hex;
	int		denom;
	int		i;

	hex = "0123456789abcdef0";
	denom = 268435456 / 16;
	i = -1;
	if (num != 0)
		ft_putchar('\n');
	while (++i < 7)
	{
		ft_putchar(hex[num / denom]);
		num %= denom;
		denom /= 16;
	}
}

void	ft_hexdump(char *str)
{
	char	*hex;
	int		i;
	int		j;
	int		temp;

	i = -1;
	j = 0;
	hex = "0123456789abcdef";
	while (str[++i])
	{
		if (i % 16 == 0)
			mem_location(i);
		ft_putchar(' ');
		ft_putchar(hex[str[i] / 16]);
		ft_putchar(hex[str[i] % 16]);
	}
	if (i % 16 != 0)
	{
		while (++j < (49 - ((i % 16) * 3)))
			ft_putchar(' ');
		mem_location(i);
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		fd;
	int		ret;
	int		len;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (argc > 1)
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				return (ft_open_failed());
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_hexdump(buf);
			if (close(fd) == -1)
				return (ft_close_failed());
		}
	ft_putchar('\n');
	return (0);
}
