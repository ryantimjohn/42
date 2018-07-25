/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:09:52 by tryan             #+#    #+#             */
/*   Updated: 2018/04/02 14:09:56 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUF_SIZE 1

typedef struct	s_size
{
	int			x;
	int			y;
}				t_size;

typedef struct	s_chars
{
	int			stated_height;
	char		empty;
	char		obstacle;
	char		full;
}				t_chars;

typedef struct	s_b
{
	int			row;
	int			col;
	int			size;
}				t_b;

int				size_check(char *input, t_size *size, t_chars *chars);
char			**mapato2da(char *input, t_size *size, t_chars *chars);
void			ft_putchar(char c);
int				**tim_mapatoi(t_size *size);
int				**mapatoi(t_size *size);
int				**addobstacles(char **charmap, t_chars *chars,
								int **map, t_size *size);
void			checktable(int **intmap, t_size *size, t_b *b);
char			**fillmap(char **charmap, t_b *b, t_size *size, t_chars *chars);
void			printtable(char **charmap, t_size *size);
void			ft_putstr(char *str);
char			*read_files(char *argv);
char			*first_line(char *input, t_chars *chars);
int				ft_atoi(char *str);
char			*ft_strcat(char *dest, char *src);
int				solve_map(char *input);
char			*read_stdinput(void);

#endif
