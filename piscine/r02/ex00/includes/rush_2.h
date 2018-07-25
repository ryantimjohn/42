/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 08:56:29 by tryan             #+#    #+#             */
/*   Updated: 2018/04/01 18:54:18 by fhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H
# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 1

typedef struct	s_size {
	int			x;
	int			y;
}				t_size;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *str1, char *str2);
int				ft_atoi(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_itoa(int num);
char			*rush00(int x, int y);
char			*rush01(int x, int y);
char			*rush02(int x, int y);
char			*rush03(int x, int y);
char			*rush04(int x, int y);
char			*rush_check(char *input, t_size *size);
void			size_check(char *input, t_size *size);
void			rush(int x, int y);

#endif
