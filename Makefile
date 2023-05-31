NAME	=	push_swap
FLAGS	=	-Wall -Werror -Wextra
CC		=	cc
SRC		=	push_swap.c			\
			push.c				\
			rotate.c			\
			swap.c				\
			functions.c			\
			extra_functions.c	\

all:	$(NAME)

$(NAME):
			$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean:
			rm $(NAME)

fclean:		clean

re:			fclean
			make

.PHONY:		all clean re