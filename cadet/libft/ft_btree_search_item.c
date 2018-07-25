/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:39:02 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 18:39:03 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	if (root->left)
		if (ft_btree_search_item(root->left, data_ref, cmpf))
			return (ft_btree_search_item(root->left, data_ref, cmpf));
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (root->right)
		if (ft_btree_search_item(root->right, data_ref, cmpf))
			return (ft_btree_search_item(root->right, data_ref, cmpf));
	return (NULL);
}
