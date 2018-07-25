/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:19:02 by tryan             #+#    #+#             */
/*   Updated: 2018/03/19 23:31:00 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	j = 0;
	if (dlen > size)
		return (size + slen);
	while (i <= size && dest[i])
		i++;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size - i == 1 || src[j] == '\0')
		dest[i] = '\0';
	return (dlen + slen);
}
