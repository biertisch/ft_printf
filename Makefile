NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I./includes/
LIB = ar rcs
RM = rm -f

SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
