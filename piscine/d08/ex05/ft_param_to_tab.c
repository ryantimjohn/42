/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 09:31:35 by tryan             #+#    #+#             */
/*   Updated: 2018/03/23 21:36:48 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char		**ft_split_whitespaces(char *str);
void		ft_show_tab(struct s_stock_par *par);

int			ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(char *str)
{
	char		*new;
	int			i;

	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*table;
	int			i;

	i = 0;
	table = (struct s_stock_par*)malloc(sizeof(table) * (ac + 1));
	while (i < ac)
	{
		table[i].size_param = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		table[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	table[i].str = (void *)0;
	return (table);
}
