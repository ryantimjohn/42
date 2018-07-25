/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:12:45 by shlee             #+#    #+#             */
/*   Updated: 2018/04/01 19:20:31 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_2.h"

int	main(void)
{
	char	*input;
	t_size	*size;
	char	buf[BUF_SIZE + 1];

	size = (t_size*)malloc(sizeof(t_size));
	size->x = 0;
	size->y = 0;
	input = (char*)malloc(sizeof(char) * 1000000);
	input[0] = '\0';
	while (read(0, buf, BUF_SIZE))
	{
		buf[1] = '\0';
		ft_strcat(input, buf);
	}
	size_check(input, size);
	ft_putstr(rush_check(input, size));
	free(input);
	return (0);
}
