/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:13:48 by tryan             #+#    #+#             */
/*   Updated: 2018/03/21 20:41:12 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		totalchars;
	char	*output;

	i = 0;
	j = -1;
	k = 0;
	totalchars = 0;
	while (++i < argc)
		totalchars += (ft_strlen(argv[i]) + 1);
	output = (char*)malloc(sizeof(*output) * totalchars);
	i = 1;
	while (k < totalchars)
	{
		while (argv[i][++j] != '\0')
			output[k++] = argv[i][j];
		output[k] = '\n';
		k++;
		i++;
		j = -1;
	}
	output[k - 1] = '\0';
	return (output);
}
