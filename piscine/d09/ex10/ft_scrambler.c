/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 07:09:00 by tryan             #+#    #+#             */
/*   Updated: 2018/03/23 07:16:25 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		tempa;
	int		tempb;
	int		tempc;
	int		tempd;

	tempa = ***a;
	tempb = *b;
	tempc = *******c;
	tempd = ****d;
	*******c = tempa;
	****d = tempc;
	*b = tempd;
	***a = tempb;
}
