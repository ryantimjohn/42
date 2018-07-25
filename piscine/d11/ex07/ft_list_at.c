/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 22:39:09 by tryan             #+#    #+#             */
/*   Updated: 2018/03/27 22:39:13 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (begin_list)
	{
		while (i < nbr)
		{
			if ((begin_list)->next)
			{
				begin_list = begin_list->next;
				i++;
			}
			else
				return (0);
		}
		return (begin_list);
	}
	else
		return (0);
}
