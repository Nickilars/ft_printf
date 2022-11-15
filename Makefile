CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_printf.c \
		ft_print_c.c \
		ft_print_s.c \
		ft_print_d.c \ft_print_hex.c

OBJ		= $(SRC:.c=.o)

NAME	= libftprintf.a

DEPS	= libftprintf.h

RM		= rm -rf

LIBFT	= libft

all :	$(NAME)

%.o :	%.c $(DEPS)
		$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
		$(MAKE) -C $(LIBFT)
		cp libft/libft.a .
		mv libft.a $(NAME)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

re : fclean $(NAME)

clean :
		$(RM) *.o
		$(MAKE) -C $(LIBFT) clean

fclean : clean
		$(RM) $(NAME)
		$(RM) $(LIBFT)/libft.a

.PHONY: all re clean fclean
