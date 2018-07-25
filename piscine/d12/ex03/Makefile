
NAME = ft_hexdump

SRC = srcs/$(NAME).c srcs/ft_put.c srcs/ft_errors.c

OBJECTS = $(NAME).o ft_put.o ft_errors.o

all = $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
