NAME	=	libft.a

SRCS	=	ft_atoi.c		ft_isalpha.c	ft_memmove.c\
			ft_memcpy.c		ft_strdup.c		ft_isdigit.c\
			ft_tolower.c	ft_bzero.c		ft_strlcpy.c\
			ft_isascii.c	ft_strlcat.c	ft_strncmp.c\
			ft_toupper.c	ft_calloc.c		ft_strchr.c\
			ft_memchr.c		ft_memset.c		ft_putchar_fd.c\
			ft_strnstr.c	ft_isalnum.c	ft_putstr_fd.c\
			ft_isprint.c	ft_memcmp.c		ft_putendl_fd.c\
			ft_strlen.c		ft_strrchr.c	ft_putnbr_fd.c\
			ft_substr.c		ft_strjoin.c	ft_strtrim.c\
			ft_strmapi.c	ft_striteri.c	ft_itoa.c\
			ft_split.c\
			
HEADER	=	libft.h
OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) 

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all