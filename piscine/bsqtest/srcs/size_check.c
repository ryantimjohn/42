/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:26:32 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:26:34 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		size_check(char *input, t_size *size, t_chars *chars)
{
	int width;
	int current_line;
	int height;

	width = 0;
	current_line = 0;
	height = 1;
	while (*input && *input++ != '\n')
		width++;
	while (*input)
	{
		while (*input && *input++ != '\n')
			current_line++;
		if (current_line != width)
			return (0);
		height++;
		current_line = 0;
	}
	if (height != chars->stated_height)
		return (0);
	size->x = width;
	size->y = height;
	return (1);
}
