/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copy N char
*/

#include"lib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int x = my_strlen(src);

    while (i < n) {
        if (n > x)
            dest[i] = '\0';
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
