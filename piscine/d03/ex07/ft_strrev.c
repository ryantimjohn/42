/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 09:46:35 by tryan             #+#    #+#             */
/*   Updated: 2018/03/16 09:46:37 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		size;
	char	temp;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
	return (str);
}
