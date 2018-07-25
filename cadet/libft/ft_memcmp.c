/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 08:04:29 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 08:04:33 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*chars1;
	unsigned char	*chars2;

	chars1 = (unsigned char *)s1;
	chars2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*chars1 != *chars2)
			return (*chars1 - *chars2);
		chars1++;
		chars2++;
		n--;
	}
	return (0);
}
