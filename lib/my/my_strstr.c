/*
** EPITECH PROJECT, 2021
** my_strstr function
** File description:
** find a str into an other str
*/

#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, int n);

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int len_find = my_strlen(to_find);

    while (str[i] != '\0') {
        if (my_strncmp(&str[i], to_find, len_find) == 0) {
            return (&str[i]);
        }
        i++;
    }
    return NULL;
}
