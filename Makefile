NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I./includes/
LIB = ar rcs
RM = rm -f

SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a


.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(LIB) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all
