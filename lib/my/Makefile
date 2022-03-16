##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## oui
##

SRC	=	my_isneg.c	\
		my_revstr.c	\
		my_str_isalpha.c	\
		my_strncpy.c	\
		my_compute_factorial_it.c	\
		my_showmem.c	\
		my_str_islower.c	\
		my_strstr.c	\
		my_compute_factorial_rec.c	\
		my_print_alpha.c	\
		my_showstr.c	\
		my_str_isnum.c	\
		my_str_to_word_array.c	\
		my_compute_power_it.c	\
		my_str_isprintable.c	\
		my_strupcase.c	\
		my_compute_power_rec.c		\
		my_print_digits.c	\
		my_str_isupper.c	\
		my_swap.c	\
		my_compute_square_root.c	\
		my_print_revalpha.c	\
		my_strcat.c	\
		my_strlen.c	\
		my_evil_str.c	\
		my_putchar.c	\
		my_strcmp.c	\
		my_strlowcase.c	\
		my_find_prime_sup.c	\
		my_put_nbr.c	\
		my_strcpy.c	\
		my_strncat.c	\
		my_getnbr.c	\
		my_putstr.c	\
		my_strdup.c	\
		my_strncmp.c	\
		my_atoi.c	\
		my_puterror.c	\
		my_ctoi.c 	\
		itoc.c 	\
		my_int_len.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc   $(NAME) $(OBJ)
	cp libmy.a ../
	cp lib.h ../../include
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
