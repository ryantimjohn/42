/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:14:31 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 10:14:33 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char	*tmp;

	if (!(s))
		return ;
	tmp = s;
	while (*tmp)
	{
		*tmp = '\0';
		tmp++;
	}
}