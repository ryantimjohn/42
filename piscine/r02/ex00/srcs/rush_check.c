/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:19:11 by fhong             #+#    #+#             */
/*   Updated: 2018/04/01 19:19:12 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

char	*ft_output(char *output, t_size *size, int i)
{
	if (*output != '\0')
		output = ft_strcat(output, " || ");
	output = ft_strcat(output, "[rush-0");
	output = ft_strcat(output, ft_itoa(i));
	output = ft_strcat(output, "] [");
	output = ft_strcat(output, ft_itoa(size->x));
	output = ft_strcat(output, "] [");
	output = ft_strcat(output, ft_itoa(size->y));
	output = ft_strcat(output, "]");
	return (output);
}

char	*rush_check(char *input, t_size *size)
{
	char *output;

	output = (char *)malloc(sizeof(char) * 100);
	*output = '\0';
	if (ft_strcmp(input, rush00(size->x, size->y)) == 0)
		output = ft_output(output, size, 0);
	if (ft_strcmp(input, rush01(size->x, size->y)) == 0)
		output = ft_output(output, size, 1);
	if (ft_strcmp(input, rush02(size->x, size->y)) == 0)
		output = ft_output(output, size, 2);
	if (ft_strcmp(input, rush03(size->x, size->y)) == 0)
		output = ft_output(output, size, 3);
	if (ft_strcmp(input, rush04(size->x, size->y)) == 0)
		output = ft_output(output, size, 4);
	if (*output == '\0' || output[0] != '[')
		output = ft_strcat(output, "aucune");
	output = ft_strcat(output, "\n");
	return (output);
}
