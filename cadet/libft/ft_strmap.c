/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:09:51 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:09:52 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	size;
	char const		*sizer;
	char			*new;
	char			*tmp;

	if (!(s))
		return (NULL);
	size = 1;
	sizer = s;
	while (*sizer)
	{
		sizer++;
		size++;
	}
	if (!(new = (char *)(malloc(sizeof(char) * size))))
		return (NULL);
	tmp = new;
	while (*s)
	{
		*tmp = f(*s);
		tmp++;
		s++;
	}
	*tmp = '\0';
	return (new);
}
