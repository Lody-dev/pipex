NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_printf.c\
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isx.c\
	ft_itoa.c \
	ft_memchr.c \
	ft_memclean.c\
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putbighex.c\
	ft_putchar.c\
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_puthex.c\
	ft_putnbr.c\
	ft_putnbr_fd.c\
	ft_putptr.c\
	ft_putstr.c\
	ft_putstr_fd.c \
	ft_putunbr.c\
	ft_split.c\
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	get_next_line.c \
	ft_tstrjoin.c


OBJ = $(SRC:.c=.o)


all: $(NAME)



$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)


clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
