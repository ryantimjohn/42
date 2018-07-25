/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:55:11 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 07:55:14 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memstart;
	char *tmp;

	if (!(memstart = (void *)malloc(sizeof(size) * size)))
		return (NULL);
	tmp = memstart;
	while (size > 0)
	{
		*tmp = '\0';
		tmp++;
		size--;
	}
	return (memstart);
}
