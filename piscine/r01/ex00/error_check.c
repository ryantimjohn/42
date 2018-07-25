/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 16:15:40 by tryan             #+#    #+#             */
/*   Updated: 2018/03/25 16:15:43 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	error_check(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = -1;
	if (argc != 10)
		return (1);
	while (++i < 10)
		if (ft_strlen(argv[i]) != 9)
			return (1);
	i = 0;
	while (++i < 10)
	{
		while (++j < 9)
			if (!(argv[i][j] == '.' ||
				(argv[i][j] >= '1' && argv[i][j] <= '9')))
				return (1);
		j = -1;
	}
	return (0);
}
