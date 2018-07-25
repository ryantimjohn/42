/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:28 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 19:34:03 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		lines;
	char	buf[BUF_SIZE + 1];
	int		cbytes;

	if (argc == 1)
		ft_putbuffer();
	if (argc > 1)
	{
		if (ft_strcmp(argv[1], "-c") == 0)
		{
			cbytes = ft_atoi(argv[2]);
			ft_byteloop(argc, argv, cbytes);
		}
		else
			ft_linesloop(argc, argv);
	}
	return (0);
}
