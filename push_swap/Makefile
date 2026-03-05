NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I include

HEADER	=	push_swap.h

SRC		=	main.c commands.c handle_args.c

OBJS	=	$(SRC:.c=.o)

LIBFT	=	libft/libft.a

all:	$(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(OBJS) -Llibft -lft -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re