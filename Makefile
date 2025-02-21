CC = cc
files = ft_bzero.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_putendl_fd.c \
		ft_split.c \
		ft_striteri.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strtrim.c \
		ft_toupper.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_calloc.c \
		ft_isascii.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strmapi.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_atoi.c \

bonus_files = 	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

OBJECT = $(files:.c=.o)
BONUS_OBJECT = $(bonus_files:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	@ar rcs $(NAME) $(OBJECT)

bonus: $(OBJECT) $(BONUS_OBJECT)
	@ar rcs $(NAME) $(OBJECT) $(BONUS_OBJECT)

run : all
	$(CC) $(CFLAGS) -L. -lft main.c && ./a.out

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@