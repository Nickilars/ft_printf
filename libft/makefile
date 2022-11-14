NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

FILES		= ft_isalpha \
				ft_isdigit \
				ft_isalnum \
				ft_isascii \
				ft_isprint \
				ft_tolower \
				ft_toupper \
				ft_atoi \
				ft_strncmp \
				ft_memcmp \
				ft_itoa \
				ft_strdup \
				ft_strchr \
				ft_strrchr \
				ft_strlen \
				ft_strlcpy \
				ft_strlcat \
				ft_split \
				ft_strjoin \
				ft_strtrim \
				ft_strmapi \
				ft_substr \
				ft_strnstr \
				ft_bzero \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putnbr_fd \
				ft_putendl_fd \
				ft_calloc \
				ft_memset \
				ft_memchr \
				ft_memcpy \
				ft_memmove \
				ft_striteri \

FILES_BONUS	= ft_lstnew_bonus \
				ft_lstadd_front_bonus \
				ft_lstsize_bonus \
				ft_lstlast_bonus \
				ft_lstadd_back_bonus \
				ft_lstdelone_bonus \
				ft_lstclear_bonus \
				ft_lstiter_bonus

SRCS_DIR	= ./
SRCS		= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_BONUS	= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_BONUS)))

OBJS_DIR 	= ./
OBJS		= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_BONUS	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_BONUS)))

.c.o: 		$(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<

DEPS		= libft.h

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
