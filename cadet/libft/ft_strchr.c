/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:12:49 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 10:12:50 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1)
	{
		if ((char)c == *s1)
			return (s1);
		s1++;
	}
	if ((char)c == '\0')
		return (s1);
	return (NULL);
}
