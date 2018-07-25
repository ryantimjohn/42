/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:33:11 by tryan             #+#    #+#             */
/*   Updated: 2018/04/01 08:37:23 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		eval_expr(++argv);
		ft_putchar('\n');
	}
	return (0);
}