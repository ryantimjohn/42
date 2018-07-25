/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:38:28 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:38:29 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	while (tmp >= s)
	{
		if ((char)c == *tmp)
			return ((char *)tmp);
		tmp--;
	}
	return (NULL);
}
