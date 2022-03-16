/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** BSQ main for the project bsq
*/

#include "bsq.h"

int main(int ac, char **av)
{
    if (error(ac, av) == 84) {
        return 84;
    } else {
        launcher(ac, av);
    }
    return 0;
}
