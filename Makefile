NAME	=	push_swap.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	push_swap.h

SRC		=	 \

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c %$(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re