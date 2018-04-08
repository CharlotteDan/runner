##
## EPITECH PROJECT, 2017
## compile
## File description:
## my_runner
##

SRC	=	src/my_runner.c \
		src/move.c \
		src/move1.c \
		src/window.c \
		src/window2.c \
		src/position.c \
		src/goblin.c \
		src/other/my_putstr.c \
		src/other/my_strdup.c \
		src/other/my_str_to_word_array.c \
		src/my_itoa.c \
		src/help.c \
		src/other/my_strlen.c \
		src/other/my_strncpy.c

CFLAGS	+= -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all: $(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME) -lc_graph_prog -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all re clean fclean
