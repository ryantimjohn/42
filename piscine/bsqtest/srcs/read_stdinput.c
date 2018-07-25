/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:10:54 by tryan             #+#    #+#             */
/*   Updated: 2018/04/04 15:10:59 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_stdinput(void)
{
	char *input;
	char buf[BUF_SIZE + 1];

	input = (char *)malloc(sizeof(char) * 100000001);
	input[0] = '\0';
	while (read(0, buf, BUF_SIZE))
	{
		buf[1] = '\0';
		ft_strcat(input, buf);
	}
	return (input);
}
