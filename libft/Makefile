STR = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_strncmp.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c 
PUT = ft_putstr.c ft_putnbr.c ft_putchar.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OTHER = ft_atoi.c ft_bzero.c ft_tolower.c ft_toupper.c ft_itoa.c ft_isspace.c ft_isblank.c get_next_line.c ft_numlen.c ft_chr_index.c ft_strchr_exist.c ft_chrjoin_start.c ft_chrjoin_end.c ft_convert_base.c ft_sqrt.c
IS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c
MEM = ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c
LST = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
FILE = $(STR) $(PUT) $(OTHER) $(IS) $(MEM) $(LST)

HEAD = libft.h

OBJ = $(FILE:.c=.o)

NAME = libft.a
MAIN = main.c
EXEC = exec

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $< -Wall -Werror -Wextra -c -o $@

clean:
	rm -f $(OBJ) $(EXEC)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
