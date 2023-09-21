NAME = libft.a
SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_memcmp.c \
		ft_strnstr.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -crs  $@ $?

%.o : %.c
	@gcc -c $(CFLAGS) $?



.PHONY : clean                  //indica al compilador que es una regla, no el nombre de un programa, en caso de fallar
.PHONY : fclean
clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

re: fclean all
