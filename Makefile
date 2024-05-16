SDIR = srcs
IDIR = includes

MFILE = ft_printf.c
SFILES = ft_putchar.c ft_putstr.c ft_putptr.c ft_putint.c ft_putuint.c

SRCS = $(MFILE) $(SFILES:%=$(SDIR)/%)
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	cc $(CFLAGS) -I $(IDIR) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
