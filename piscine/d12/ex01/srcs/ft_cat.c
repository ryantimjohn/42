/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:28 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 15:22:34 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_putbuffer(void)
{
	char buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int argc, char const *argv[])
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (argc == 1 || (argc == 2 && *argv[1] == '-'))
		ft_putbuffer();
	else
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				return (ft_open_failed());
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
			if (close(fd) == -1)
				return (ft_close_failed());
		}
	return (0);
}
