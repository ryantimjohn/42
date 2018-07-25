/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:35:46 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:35:47 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	while (haystack[i] && (size_t)i < len)
	{
		j = 0;
		while ((haystack[i + j] && (size_t)(i + j) < len) || !(needle[j]))
		{
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
			else if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}
