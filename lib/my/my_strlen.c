/*
** EPITECH PROJECT, 2021
** Strlen func
** File description:
** Function that return the size of a string
*/

#include <stddef.h>

int  my_strlen(char  const *str)
{
    int i = 0;

    if (str == NULL)
        return 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
