/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_suffix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:37:54 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 18:37:55 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		ft_btree_apply_suffix(root->left, applyf);
	if (root->right)
		ft_btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
