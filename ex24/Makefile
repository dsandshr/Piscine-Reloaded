SRC = ./srcs/
INC = ./includes/
FUN	= $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
NAME = libft.a
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(FUN) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
