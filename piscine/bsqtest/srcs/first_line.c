/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:21:03 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/04 15:21:05 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*first_line(char *input, t_chars *chars)
{
	chars->stated_height = ft_atoi(input);
	while (*input != '\n')
		input++;
	input--;
	chars->full = (*input--);
	chars->obstacle = (*input--);
	chars->empty = (*input--);
	while (*input != '\n')
		input++;
	return (++input);
}
