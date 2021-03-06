/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:10:07 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 10:10:09 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *tmp;

	tmp = s1;
	while (*tmp)
		tmp++;
	while (*s2)
	{
		*tmp = *s2;
		tmp++;
		s2++;
	}
	*tmp = '\0';
	return (s1);
}
