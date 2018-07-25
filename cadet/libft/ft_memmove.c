/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:05:19 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 09:05:19 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*chardst;
	unsigned char	*charsrc;
	size_t			i;

	chardst = (unsigned char *)dst;
	charsrc = (unsigned char *)src;
	i = -1;
	if (charsrc > chardst)
	{
		while (++i < n)
			*(chardst + i) = *(charsrc + i);
	}
	else
	{
		while ((int)(--n) >= 0)
			*(chardst + n) = *(charsrc + n);
	}
	return (dst);
}
