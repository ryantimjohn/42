
NAME = ft_tail

SRC = srcs/ft_tail.c srcs/ft_put.c srcs/ft_errors.c srcs/ft_atoi.c \
	srcs/byte_loop.c srcs/line_loop.c

OBJECTS = ft_tail.o ft_put.o ft_errors.o ft_atoi.o byte_loop.o line_loop.o

all = $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
