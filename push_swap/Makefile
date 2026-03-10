NAME	=	push_swap
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I include

HEADER	=	include/push_swap.h

SRC		=	\
			main.c \
			commands/push_command.c \
			commands/rotate_command.c \
			commands/rrotate_command.c \
			commands/swap_command.c \
			parsing/parsers.c \
			sorting/algo_utils.c \
			sorting/algorithm.c \
			sorting/sort_control.c \
			sorting/tiny_sort.c \
			srcs/checks.c \
			srcs/utility.c 

OBJS	=	$(SRC:.c=.o)

LIBFT	=	libft/libft.a

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Llibft -lft -o $(NAME)

$(LIBFT):
	make -C libft

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