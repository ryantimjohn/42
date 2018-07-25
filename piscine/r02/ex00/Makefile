# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shlee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 14:45:34 by shlee             #+#    #+#              #
#    Updated: 2018/04/01 19:13:36 by shlee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
NAME00 = rush-00
NAME01 = rush-01
NAME02 = rush-02
NAME03 = rush-03
NAME04 = rush-04
CFLAG = -Wall -Wextra -Werror
HEADERDIR = includes
SRCDIR = srcs
SRCEXDIR = srcs00
SRCS := $(wildcard $(SRCDIR)/*.c)

all : $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

$(NAME) :
	gcc -c $(SRCS) -I $(HEADERDIR)
	gcc -o $(NAME) *.o $(CFLAG)

$(NAME00) :
	gcc -c $(SRCEXDIR)/rush00.c $(SRCEXDIR)/main.c $(SRCDIR)/ft_atoi.c -I $(HEADERDIR)
	gcc -o $(NAME00) rush00.o main.o ft_atoi.o ft_putchar.o $(CFLAG)

$(NAME01) :
	gcc -c $(SRCEXDIR)/rush01.c $(SRCEXDIR)/main.c $(SRCDIR)/ft_atoi.c -I $(HEADERDIR)
	gcc -o $(NAME01) rush01.o main.o ft_atoi.o ft_putchar.o $(CFLAG)

$(NAME02) :
	gcc -c $(SRCEXDIR)/rush02.c $(SRCEXDIR)/main.c $(SRCDIR)/ft_atoi.c -I $(HEADERDIR)
	gcc -o $(NAME02) rush02.o main.o ft_atoi.o ft_putchar.o $(CFLAG)

$(NAME03) :
	gcc -c $(SRCEXDIR)/rush03.c $(SRCEXDIR)/main.c $(SRCDIR)/ft_atoi.c -I $(HEADERDIR)
	gcc -o $(NAME03) rush03.o main.o ft_atoi.o ft_putchar.o $(CFLAG)

$(NAME04) :
	gcc -c $(SRCEXDIR)/rush04.c $(SRCEXDIR)/main.c $(SRCDIR)/ft_atoi.c -I $(HEADERDIR)
	gcc -o $(NAME04) rush04.o main.o ft_atoi.o ft_putchar.o $(CFLAG)

.PHONY : clean fclean re

clean :
	/bin/rm -f *.o
	/bin/rm -f *~

fclean : clean
	/bin/rm -f $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re : fclean all
