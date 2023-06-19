NAME	=	push_swap
FLAGS	=	-Wall -Werror -Wextra
CC		=	cc
SRC		=	push_swap.c	\
			functions/stacks.c	\
			functions/push.c	\
			functions/rotate.c	\
			functions/rrotate.c	\
			functions/swap.c	\
			functions/functions.c	\
			functions/extra_functions.c	\

all:	$(NAME)

$(NAME):
			$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean:
			rm $(NAME)

fclean:		clean

re:			fclean
			make

.PHONY:		all clean fclean re