/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 01:46:07 by tryan             #+#    #+#             */
/*   Updated: 2018/03/20 02:20:25 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_puthex(char c)
{
	char base[] = "0123456789ABCDEF";
	ft_putchar('\\')
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ')
		{
			ft_puthex(str[i]);
			i++;
		}
		else
		{
		ft_putchar(str[i]);
		i++;
		}
	}
}
