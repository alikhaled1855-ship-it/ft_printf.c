NAME    = libftprintf.a

SRCS    = ft_printf.c \
          ft_printf_char.c \
          ft_printf_str.c \
          ft_printf_int.c \
          ft_printf_unsigned.c \
          ft_printf_hexa_lower.c \
          ft_printf_hexa_upper.c \
          ft_printf_pointer.c

OBJS    = $(SRCS:.c=.o)

CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re