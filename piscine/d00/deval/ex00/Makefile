#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tryan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 08:39:05 by tryan             #+#    #+#              #
#    Updated: 2018/04/01 08:39:06 by tryan            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr

SRC = srcs/eval_expr.c \
	srcs/ft_atoi.c \
	srcs/ft_putnbr.c \
	srcs/main.c

OBJECTS = eval_expr.o \
	ft_atoi.o \
	ft_putnbr.o \
	main.o

all: $(NAME)

$(NAME):
	gcc -c -Iincludes $(SRC)
	gcc -o $(NAME) -Iincludes $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
