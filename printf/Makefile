
NAME = libftprintf.a

SRC = ./ft_putchar.c\
	./ft_putstr.c\
	./ft_putnbr.c\
	./ft_esa.c\
	./ft_printf.c\
	./ft_esa_x.c\
	./ft_putnbr_u.c\
	
OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

$(NAME) :
	gcc -c $(FLAGS) $(SRC) -I.
	ar rcs $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
