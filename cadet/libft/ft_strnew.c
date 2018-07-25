/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:33:43 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:33:45 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*tmp;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	tmp = str;
	while (size > 0)
	{
		*tmp = '\0';
		tmp++;
		size--;
	}
	*tmp = '\0';
	return (str);
}
