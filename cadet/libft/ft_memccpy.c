/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 08:00:24 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 08:00:26 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n > 0)
	{
		if (*src1 == (unsigned char)c)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
			return (dst1);
		}
		else
		{
			*dst1 = *src1;
			dst1++;
			src1++;
		}
		n--;
	}
	return (NULL);
}
