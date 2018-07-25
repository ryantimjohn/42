/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:38:26 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 18:38:27 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (*root == NULL)
		*root = ft_btree_create_node(item);
	else if (cmpf((*root)->item, item) >= 1)
	{
		if ((*root)->left)
			ft_btree_insert_data(&((*root)->left), item, cmpf);
		else
			(*root)->left = ft_btree_create_node(item);
	}
	else
	{
		if ((*root)->right)
			ft_btree_insert_data(&((*root)->right), item, cmpf);
		else
			(*root)->right = ft_btree_create_node(item);
	}
}
