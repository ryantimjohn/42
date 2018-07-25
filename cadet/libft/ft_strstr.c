/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:49:20 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:49:23 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!(haystack[i]) && !(needle[i]))
		return (char *)haystack;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] || !(needle[j]))
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
