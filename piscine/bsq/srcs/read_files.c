/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:14:16 by tryan             #+#    #+#             */
/*   Updated: 2018/04/04 15:14:22 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_files(char *argv)
{
	char	*input;
	int		fd;
	char	buf[BUF_SIZE + 1];

	input = (char *)malloc(sizeof(char) * 100000001);
	input[0] = '\0';
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buf, BUF_SIZE))
	{
		buf[1] = '\0';
		ft_strcat(input, buf);
	}
	return (input);
}
