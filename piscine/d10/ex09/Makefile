#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tryan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 10:00:34 by tryan             #+#    #+#              #
#    Updated: 2018/03/26 11:23:17 by tryan            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_advanced_do-op

SRC = srcs/ft_atoi.c srcs/ft_operators.c srcs/ft_put.c srcs/ft_zero_error.c \
 	srcs/main.c

OBJECTS = ft_atoi.o ft_operators.o ft_put.o ft_zero_error.o main.o


all = $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)
