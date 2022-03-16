/*
** EPITECH PROJECT, 2021
** error file
** File description:
** error handling for bsq project
*/

#include "bsq.h"

void launcher(int ac, char **av)
{
    bsq_t bsq = {0};
    char **tab = ouaf(av[1], &bsq);

    for (int y = 0; y < bsq.lines; y++) {
        write(1, tab[y], my_strlen(tab[y]));
        write(1, "\n", 1);
    }
}

int error(int ac, char **av)
{
    bsq_t bsq = {0};
    char *buffer = open_file(av[1], &bsq);

    if (ac != 2)
        return 84;
    if (bsq.error == 84)
        return 84;
    if (buffer == NULL) {
        return 84;
    }
    return 0;
}