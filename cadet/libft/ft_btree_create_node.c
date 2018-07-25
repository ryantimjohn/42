/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:38:09 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 18:38:11 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->left = 0;
		tmp->right = 0;
	}
	return (tmp);
}
