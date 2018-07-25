/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:42:57 by tryan             #+#    #+#             */
/*   Updated: 2018/03/27 23:42:59 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*head;
	t_list	*oneahead;
	t_list	*twoahead;

	head = *begin_list;
	if (head && head->next)
	{
		oneahead = head->next;
		twoahead = oneahead->next;
		head->next = NULL;
		oneahead->next = head;
		while (twoahead)
		{
			head = oneahead;
			oneahead = twoahead;
			twoahead = twoahead->next;
			oneahead->next = head;
		}
		*begin_list = oneahead;
	}
}
