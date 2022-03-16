/*
** EPITECH PROJECT, 2021
** revstr
** File description:
** easy pizi
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    char c;
    int i = 0;
    int x = my_strlen(str) - 1;

    while (i < x) {
        c = str[x];
        str[x] = str[i];
        str[i] = c;
        i++;
        x--;
    }
    return (str);
}
