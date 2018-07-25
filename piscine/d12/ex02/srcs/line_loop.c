/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 23:10:17 by tryan             #+#    #+#             */
/*   Updated: 2018/03/29 23:10:24 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		count_lines(char *str)
{
	int i;
	int n_lines;

	i = -1;
	n_lines = 1;
	while (str[++i])
		if (str[i] == '\n')
			n_lines++;
	return (n_lines);
}

char	*advance_lines(char *str, int lines)
{
	int	n;

	n = lines - 11;
	while (n > 0)
		if (*str++ == '\n')
			n--;
	return (str);
}

void	ft_linesloop(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	int		lines;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (++i < argc)
	{
		if (!(fd = open(argv[i], O_RDONLY)))
			ft_open_failed(argv[i]);
		else
		{
			if (argc > 2)
				ft_putfilename(argv[i]);
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			lines = count_lines(buf);
			ft_putstr(advance_lines(buf, lines));
			if (close(fd) == -1)
				ft_close_failed();
		}
	}
}
