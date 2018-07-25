/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:59:03 by malves-b          #+#    #+#             */
/*   Updated: 2018/04/03 14:59:05 by malves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		d_size;
	int		s_size;

	d_size = 0;
	while (dest[d_size] != '\0')
		d_size++;
	s_size = 0;
	while (src[s_size] != '\0')
	{
		dest[d_size + s_size] = src[s_size];
		s_size++;
	}
	dest[d_size + s_size] = '\0';
	return (dest);
}
