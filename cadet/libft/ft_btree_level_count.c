/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:40:11 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 18:40:12 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_btree_level_count(t_btree *root)
{
	if (root->left && root->right)
	{
		if (ft_btree_level_count(root->left) > ft_btree_level_count(
																root->right))
			return (ft_btree_level_count(root->left) + 1);
		else
			return (ft_btree_level_count(root->right) + 1);
	}
	if (root->left)
		return (ft_btree_level_count(root->left) + 1);
	if (root->right)
		return (ft_btree_level_count(root->right) + 1);
	return (1);
}
