/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include"lib.h"

char *my_strdup(char  const *src)
{
    if (src == NULL)
        return NULL;
    int len = my_strlen(src) + 1;
    char *dest = malloc(sizeof(dest) * len);

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
