/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:18:55 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:18:58 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	char const		*sizer;
	char			*new;
	unsigned int	i;

	if (!(s))
		return (NULL);
	size = 1;
	sizer = s;
	while (*sizer)
	{
		sizer++;
		size++;
	}
	if (!(new = (char *)malloc((sizeof(char)) * size)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
