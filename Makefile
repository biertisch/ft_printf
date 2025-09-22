NAME	=	libftprintf.a
SRC		=	ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJ		=	$(SRCS:.c=.o)

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -Iinclude
LIB		=	ar rcs
RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAM)

re: fclean all

.PHONY: all clean fclean re
