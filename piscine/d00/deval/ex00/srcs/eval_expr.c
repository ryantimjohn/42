/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:58:32 by tryan             #+#    #+#             */
/*   Updated: 2018/04/01 08:37:47 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

void	eval_expr(char **expr)
{
	ft_putnbr(check_addsub(expr));
}

int		check_addsub(char **expr)
{
	int		num1;
	int		num2;
	char	symbol;

	num1 = check_muldivmod(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		symbol = **expr;
		if (symbol != '+' && symbol != '-')
			return (num1);
		(*expr)++;
		num2 = check_muldivmod(expr);
		if (symbol == '+')
			num1 = num1 + num2;
		else if (symbol == '-')
			num1 = num1 - num2;
	}
	return (num1);
}

int		check_muldivmod(char **expr)
{
	int		num1;
	int		num2;
	char	symbol;

	num1 = check_numparen(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		symbol = **expr;
		if (symbol != '*' && symbol != '/' && symbol != '%')
			return (num1);
		(*expr)++;
		num2 = check_numparen(expr);
		if (symbol == '*')
			num1 = num1 * num2;
		else if (symbol == '/')
			num1 = num1 / num2;
		else if (symbol == '%')
			num1 = num1 % num2;
	}
	return (num1);
}

int		check_numparen(char **expr)
{
	int num;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		num = (check_addsub(expr));
		if (**expr == ')')
			(*expr)++;
		return (num);
	}
	return (ft_atoi(expr));
}
