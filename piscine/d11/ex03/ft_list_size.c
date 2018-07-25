/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:27:41 by tryan             #+#    #+#             */
/*   Updated: 2018/03/27 20:27:44 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	if (begin_list)
	{
		i++;
		while ((begin_list)->next)
		{
			begin_list = begin_list->next;
			i++;
		}
		return (i);
	}
	else
		return (0);
}
