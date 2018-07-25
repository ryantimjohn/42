/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:13:16 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:13:19 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = 0;
	dstlen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dst[dstlen])
		dstlen++;
	if ((int)(dstsize - 1) <= (int)dstlen)
		return (srclen + dstsize);
	while ((int)(dstlen + i) < (int)(dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return ((dstlen + srclen));
}
