/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 00:45:51 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 00:46:01 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_help(char *a, unsigned int len, int n)
{
	while (len--)
	{
		a[len] = (char)(n % 10 + '0');
		n = n / 10;
	}
	return (a);
}

char		*ft_itoa(int n)
{
	unsigned int	len;
	int				tmpn;
	char			*a;
	int				neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 1;
	neg = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
		neg = 1;
	}
	tmpn = n;
	while (tmpn /= 10)
		len++;
	if (!(a = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	a[len] = '\0';
	a = ft_help(a, len, n);
	if (neg)
		a[0] = '-';
	return (a);
}
