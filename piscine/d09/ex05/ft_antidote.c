/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 23:07:22 by tryan             #+#    #+#             */
/*   Updated: 2018/03/22 23:12:14 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_antidote(int i, int j, int k)
{
	if (i >= j && i <= k)
		return (i);
	else if (i >= k && i <= j)
		return (i);
	else if (j >= i && j <= k)
		return (j);
	else if (j >= k && j <= i)
		return (j);
	else
		return (k);
}
