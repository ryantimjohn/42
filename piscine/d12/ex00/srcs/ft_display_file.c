/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:28 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 15:22:34 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	main(int argc, char const *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		return (ft_missing());
	else if (argc > 2)
		return (ft_too_many());
	else
	{
		fd = open(argv[1], O_RDONLY);
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
