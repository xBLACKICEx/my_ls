##
## EPITECH PROJECT, 2019
## pushswap
## File description:
## Makefile
##


SRC	=	./src/main.c\
		./src/my_ls.c\
		./src/my_ls_tools0.c\
		./src/my_ls_error.c\
		./src/func_flags/flags_0.c\
		./src/func_flags/flags_1.c\
		./lib/double_linked_list/pop_list.c\
		./lib/double_linked_list/push_list.c\
		./lib/double_linked_list/list_tools.c\
		./lib/double_linked_list/swap_list0.c\
		./lib/double_linked_list/swap_list1.c\
		./lib/tools/my_strdup.c\
		./lib/tools/my_strncmp.c\
		./lib/tools/my_strcdup.c\
		./lib/tools/my_strcat.c\

OBJ	= 	$(SRC:.c=.o)

LIB	=	-L./lib/my_printf/ -l my_printf

CFLAGS	= 	-g -g3 -I./include

CC	=	gcc -o

NAME	=	my_ls

all: $(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my_printf/
	$(CC)	$(NAME)	$(OBJ)	$(LIB)	$(CFLAGS)

clean:
	make -C ./lib/my_printf/ clean
	rm -rf	$(OBJ)
	rm -f	*~
	rm -f	*#
	rm -f	#*

fclean:	clean
	make -C ./lib/my_printf/ fclean
	rm -rf  $(NAME)

re:	fclean all
