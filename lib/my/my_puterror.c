/*
** EPITECH PROJECT, 2021
** my_puterror.c
** File description:
** str
*/
#include <unistd.h>

int my_strlen(char const *str);

void my_puterror(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    while (i < len) {
        write(2, &str[i] , 1);
        i++;
    }
}
