CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
DEPS = libft.h
RM = rm -rf

all : $(NAME)

%.o : %.c $(DEPS)
		$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

re : fclean $(NAME)

clean :     
		$(RM) *.o

fclean : clean
		$(RM) $(NAME)

.PHONY: all re clean fclean 
