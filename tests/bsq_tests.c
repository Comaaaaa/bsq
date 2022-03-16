/*
** EPITECH PROJECT, 2021
** test infin add
** File description:
** function that tests infin_add
*/

#include <criterion/criterion.h>
#include <stddef.h>
#include "../include/lib.h"
#include "../include/bsq.h"

Test (num_test, no_error)
{
    char str[5] = "oo..\n";
    int check = line_checker(str);
    cr_assert(check == 0);
}

Test (num_test, error)
{
    char str[5] = "oz..\n";
    int check = line_checker(str);
    cr_assert(check == 1);
}

Test (num_test, error_zero2)
{
    char str[5] = "dsqd\n";
    int check = line_checker(str);
    cr_assert(check == 1);
}

Test (num_test2, error_zero)
{
    char str[5] = "o..o\n";
    int check = line_checker(str);
    cr_assert(check == 0);
}

Test (column_check, error_zero)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    int x = char_lines("tests/souf.txt", bs);
    cr_assert(bs->cols == 21);
}

Test (lines_check, error_zero)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    int x = char_lines("tests/souf.txt", bs);
    cr_assert(bs->lines == 16);
}

Test (error_check, error_zero)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    char *str = open_file("tests/souf", bs);
    cr_assert(bs->error == 84);
}

Test (tab_check, one)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    int **tab = tab_filler("tests/souf.txt", bs);

    cr_assert(tab[0][1] == 1);
}

Test (algo_check, one)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    int **tab = algorithm("tests/souf.txt", bs);

    cr_assert(tab[1][1] == 2);
}

Test (filler_check2, one)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    char **tab = miaou_filler("tests/souf.txt", bs);

    cr_assert(tab[1][3] == 'o');
}

Test (check_two, one)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    char **tab = ouaf("tests/souf.txt", bs);

    cr_assert(tab[15][13] == 'x');
}

Test (error_check, one)
{
    bsq_t *bs = malloc(sizeof(bsq_t));
    int **tab = algorithm("tests/souf.txt", bs);

    cr_assert(tab[1][1] == 2);
}