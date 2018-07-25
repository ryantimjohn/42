
NAME = ft_display_file

SRC = srcs/ft_display_file.c srcs/ft_put.c srcs/ft_errors.c

OBJECTS = ft_display_file.o ft_put.o ft_errors.o

all = $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
