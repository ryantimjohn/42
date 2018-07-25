#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tryan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 13:58:50 by tryan             #+#    #+#              #
#    Updated: 2018/04/02 13:58:52 by tryan            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

SRC = srcs/main.c srcs/size_check.c srcs/mapato2da.c srcs/ft_putchar.c \
	srcs/mapatoi.c srcs/addobstacles.c srcs/checktable.c srcs/fillmap.c \
	srcs/printtable.c srcs/ft_putstr.c srcs/first_line.c srcs/read_files.c \
	srcs/ft_atoi.c srcs/ft_strcat.c srcs/read_stdinput.c

OBJECTS = main.o size_check.o mapato2da.o ft_putchar.o mapatoi.o \
		addobstacles.o checktable.o fillmap.o printtable.o ft_putstr.o \
		first_line.o read_files.o ft_atoi.o ft_strcat.o read_stdinput.o

all = $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
