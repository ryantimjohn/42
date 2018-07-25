/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 10:08:18 by tryan             #+#    #+#             */
/*   Updated: 2018/03/16 10:08:20 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	loop(char *str, int size, int i, int j)
{
	int final;

	final = 0;
	while (str[i + 1] != '\0')
	{
		size *= 10;
		i++;
	}
	while (str[j] != '\0')
	{
		final += ((str[j] - 48) * size);
		size /= 10;
		j++;
	}
	return (final);
}

int	ft_atoi(char *str)
{
	int size;
	int i;
	int j;

	size = 1;
	i = 0;
	j = 0;
	if (str[i] == '-')
	{
		size *= -1;
		i++;
		j++;
	}
	return (loop(str, size, i, j));
}
