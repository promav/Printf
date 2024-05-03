NAME = libftprintf.a

SRCS = ft_printf.c ft_convert.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJS = $(SRCS:%.c=%.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus