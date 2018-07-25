/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:31:14 by amyburgh          #+#    #+#             */
/*   Updated: 2018/03/18 15:39:44 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_atoi(char *str)
{
	int nb;

	nb = 0;
	while (*str != '\0')
	{
		if (str[0] >= '0' && str[0] <= '9' && nb < 214748364)
		{
			nb = nb * 10 + (*str - '0');
		}
		else
		{
			ft_putstr("INVALID INPUT!\n");
			return (-1);
		}
		str++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	int size1;
	int size2;
	int i;

	(void)argc;
	i = 0;
	while (argv[i] != '\0')
		i++;
	if (i <= 1)
		return (0);
	if (i != 3)
	{
		ft_putstr("INVALID INPUT!\n");
		return (0);
	}
	else
	{
		size1 = ft_atoi(argv[1]);
		if (size1 == -1)
			return (0);
		size2 = ft_atoi(argv[2]);
		if (size2 == -1)
			return (0);
		rush(size1, size2);
	}
	return (0);
}
