/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:55:27 by tryan             #+#    #+#             */
/*   Updated: 2018/03/27 20:56:50 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*output;
	int		i;

	output = 0;
	i = 1;
	if (ac > 1)
		ft_list_push_front(&output, av[i++]);
	while (ac > i)
		ft_list_push_front(&output, av[i++]);
	return (output);
}
