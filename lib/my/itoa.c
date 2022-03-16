/*
** EPITECH PROJECT, 2021
** int to array
** File description:
** convert an int into an array
*/

#include "lib.h"

int int_size(int value);

char *my_itoa(int nb)
{
    int i = 0;
    int tmp = int_size(nb);
    char *str = malloc(sizeof(char) * int_size(nb) + 1);

    while (i != tmp) {
        str[i] = itoc(nb % 10);
        nb = nb /10;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}