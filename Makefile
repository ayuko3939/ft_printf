CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_strlen.c ft_strchr.c \
	ft_putchar_fd.c ft_puthexa_fd.c ft_putnbr_fd.c ft_putptr_fd.c ft_putstr_fd.c ft_putunsigned_fd.c \
	print_char.c print_hexa.c print_int.c print_ptr.c print_str.c print_unsigned.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

%.o: %.c
	$(CC) -g $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
