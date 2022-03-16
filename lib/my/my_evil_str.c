/*
** EPITECH PROJECT, 2021
** Evil str
** File description:
** Function that give a string backward
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    char c;
    int i = 0;
    int a = my_strlen(str) - 1;

    while (i < a) {
        c = str[a];
        str[a] = str[i];
        str[i] = c;
        a--;
        i++;
    }
    return (str);
}
