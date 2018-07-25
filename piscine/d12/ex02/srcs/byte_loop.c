/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   byte_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 23:09:31 by tryan             #+#    #+#             */
/*   Updated: 2018/03/29 23:09:34 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		count_bytes(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*advance_bytes(char *str, int bytes, int cbytes)
{
	int	n;

	n = bytes - cbytes - 1;
	while (n > 0)
	{
		str++;
		n--;
	}
	return (str);
}

void	ft_byteloop(int argc, char **argv, int cbytes)
{
	int		i;
	int		fd;
	int		ret;
	int		bytes;
	char	buf[BUF_SIZE + 1];

	i = 2;
	while (++i < argc)
	{
		if (!(fd = open(argv[i], O_RDONLY)))
			ft_open_failed(argv[i]);
		else
		{
			if (argc > 4)
				ft_putfilename(argv[i]);
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			bytes = count_bytes(buf);
			ft_putstr(advance_bytes(buf, bytes, cbytes));
			if (close(fd) == -1)
				ft_close_failed();
		}
	}
}
