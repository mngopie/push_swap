NAME	=	push_swap.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	push_swap.h

SRC		=	main.c commands.c handle_args.c \

OBJS	=	$(SRC:.c=.o)

LIBFT	=	libft/libft.a

all:	$(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(OBJS) -Llibft -lft -o $(NAME)
# 	ar rcs $(NAME) $(OBJ)

%.o: %.c %$(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re