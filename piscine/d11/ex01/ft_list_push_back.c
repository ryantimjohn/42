/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:44:32 by tryan             #+#    #+#             */
/*   Updated: 2018/03/27 11:30:25 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	**trav;

	tmp = ft_create_elem(data);
	if (*begin_list)
	{
		trav = begin_list;
		while ((*trav)->next)
			trav = &(*trav)->next;
		(*trav)->next = &(*tmp);
	}
	else
	{
		(*begin_list) = tmp;
	}
}
