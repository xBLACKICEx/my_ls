##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## makefile
##

SRC	=	./lib/digital/put_num0.c\
		./lib/digital/put_num1.c\
		./lib/digital/u_put_num0.c\
		./lib/digital/u_put_num1.c\
		./lib/digital/u_put_num2.c\
		./lib/digital/u_put_num3.c\
		./lib/digital/u_put_num4.c\
		./lib/particular/particular0.c\
		./lib/particular/flag_option0.c\
		./lib/particular/flag_option2.c\
		./lib/string/put_str0.c\
		./lib/string/put_str1.c\
		./lib/type/type0.c\
		./lib/type/type1.c\
		./lib/type/type2.c\
		./src/error0.c\
		./src/flag_operation.c\
		./src/my_getnbr.c\
		./src/my_printf.c\
		./src/tools0.c\
		./src/tools1.c\
		./src/tools2.c\

NAME	=	libmy_printf.a

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -o

CFLAGS	=	-L. -lmy -I../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf  $(OBJ)
	rm -f	*~
	rm -f	*#
	rm -f	#*

fclean:	clean
	rm -rf  $(NAME)

re:	fclean all
