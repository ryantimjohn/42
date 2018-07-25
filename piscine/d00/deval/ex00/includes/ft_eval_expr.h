/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:42:52 by tryan             #+#    #+#             */
/*   Updated: 2018/04/01 08:38:17 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H
# include <unistd.h>

void	eval_expr(char **expr);
int		check_addsub(char **expr);
int		check_muldivmod(char **expr);
int		check_numparen(char **expr);
int		ft_atoi(char **a);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);

#endif
