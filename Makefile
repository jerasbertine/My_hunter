##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC		=	sources/window_open.c	\
			sources/manage_mouse_click.c	\
			sources/analyse_events.c	\
			sources/my_putchar.c		\
			sources/my_putstr.c			\
			sources/main.c				\
			sources/sprite.c 			\
			sources/rect.c				\
			sources/window_close.c

EXEC	=	my_hunter

OBJ		= $(SRC:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I includes

CSFLAGS		=	-lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(CPPFLAGS) $(CSFLAGS) $(CFLAGS)
	rm -f a.out

clean:
	find . \( -name "#*#" -or -name "*~" -or -name "*.o" \
	-or -name "*.gcno" -or -name "*.gcda" \) -delete

fclean: clean
	rm -f $(EXEC)

re:	fclean all

.PHONY:	re fclean clean all