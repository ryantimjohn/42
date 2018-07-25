/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:22:43 by tryan             #+#    #+#             */
/*   Updated: 2018/03/28 19:36:24 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# define BUF_SIZE 28000

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_missing(void);
int		ft_too_many(void);
void	ft_open_failed(char *str);
void	ft_close_failed(void);
void	ft_putfilename(char *str);
void	ft_putbuffer(void);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		count_bytes(char *str);
char	*advance_bytes(char *str, int bytes, int cbytes);
void	ft_byteloop(int argc, char **argv, int cbytes);
int		count_lines(char *str);
char	*advance_lines(char *str, int lines);
void	ft_linesloop(int argc, char **argv);

#endif
