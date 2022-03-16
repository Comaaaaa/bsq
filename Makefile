##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC			=			src/file_to_array.c	\
						src/algo.c 	\
						src/error.c	\

MAIN 		=			src/main.c	\

SRC_TESTS	=			tests/bsq_tests.c 	\

OBJ			=			$(SRC:.c=.o)

OBJ_MAIN 	=			$(MAIN:.c=.o)

OBJ_TESTS 	=			$(SRC_TEST:.c=.o)

NAME		=			bsq

CC			=			gcc

CPPFLAGS 	=			-I include -g -L lib/my/ -lmy

TEST_NAME	= 			unit_test

all:					$(NAME)

$(NAME): 				$(OBJ) $(OBJ_MAIN)
						make -C lib/my
						$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CPPFLAGS)
						echo -e "\e[1;31mT'es un beau goss \e[0m"

tests_run:
						make -C lib/my
						gcc -lcriterion --coverage -o $(TEST_NAME) $(SRC) $(SRC_TESTS) $(CPPFLAGS)
						-./$(TEST_NAME)

clean:
						rm -f $(OBJ)
						rm -f $(OBJ_MAIN)
						make clean -C lib/my

clean_lib :
						$(MAKE) -C -L lib/my/ fclean

fclean: 				clean
						rm -f lib/libmy.a
						rm -f lib/my/libmy.a
						rm -f	$(NAME)
						rm -f $(TEST_NAME)

re:						fclean all
