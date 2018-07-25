/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:23:12 by tryan             #+#    #+#             */
/*   Updated: 2018/03/26 22:23:15 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		ft_add(int a, int b);

int		ft_sub(int a, int b);

int		ft_mul(int a, int b);

int		ft_div(int a, int b);

int		ft_mod(int a, int b);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_zero_error(int b, char **argv);

#endif
