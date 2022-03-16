/*
** EPITECH PROJECT, 2021
** str_to_word_array
** File description:
** string to word_array
*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int my_str_separator(char c)
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9'))) {
        return 1;
    }
    return 0;
}

int word_count(char const *str)
{
    int nb = 0;
    int i = 0;

    for (; my_str_separator(str[i]) == 1; i++);
    while (str[i] != '\0') {
        if (my_str_separator(str[i]) == 0 && my_str_separator(str[i + 1]) == 1)
            nb++;
        i++;
    }
    return (nb);
}

char **malloc_tab(char const *str)
{
    int i = 0;
    int a = 0;
    int len = 0;
    int x = word_count(str);
    char **tab = malloc(sizeof(char *) * (x + 1));

    for (; my_str_separator(str[i]) == 1; i++);
    for (; str[i] != '\0'; i++) {
        if (my_str_separator(str[i]) == 1) {
            tab[a] = malloc(sizeof(char) * (len + 1));
            a++;
            len = 0;
        }
        len++;
    }
    return (tab);
}

int char_looper(char const *str)
{
    int i = 0;

    for (; my_str_separator(str[i]) == 1; i++);
    while (my_str_separator(str[i]) != 0 && str[i] != '\0') {
        i++;
    }
    return (i);
}

char **my_str_to_word_array(char  const *str)
{
    if (str == NULL)
        return NULL;

    int z = 0;
    int i = 0;
    int a = 0;
    char **tab = malloc_tab(str);

    for (; my_str_separator(str[z]) == 1; z++);
    for (; str[z] != '\0'; z++) {
        if (my_str_separator(str[z]) == 1 ) {
            i++;
            a = 0;
            z += char_looper(&str[z]);
        }
        tab[i][a] = str[z];
        a++;
    }
    tab[i + 1] = NULL;
    return (tab);
}