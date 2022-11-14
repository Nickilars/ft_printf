NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

FILES		=

FILES_BONUS	= 

SRCS_DIR	= ./
SRCS		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS	= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR 	= ./
OBJS		= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_BONUS	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))

.c.o: 		$(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<

DEPS		= libftprintf.h

RM			= rm -rf

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)
			ranlib $(NAME)

bonus:		$(OBJS_BONUS)
			ar -rcs $(NAME) $(OBJS_BONUS)
			ranlib $(NAME)

all:		$(NAME)

re:			fclean all

clean:		
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)

.PHONY: all re clean fclean bonus
