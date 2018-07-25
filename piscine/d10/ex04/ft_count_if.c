/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:27:32 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 14:56:05 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		output;

	i = 0;
	output = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			output++;
		i++;
	}
	return (output);
}
