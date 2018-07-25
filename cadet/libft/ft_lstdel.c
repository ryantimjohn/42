/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:31:48 by tryan             #+#    #+#             */
/*   Updated: 2018/07/18 12:31:52 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (!alst || !*alst)
		return ;
	current = *alst;
	while (current)
	{
		next = current->next;
		del((current)->content, (current)->content_size);
		free(current);
		current = next;
	}
	*alst = NULL;
}
