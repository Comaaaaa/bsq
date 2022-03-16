/*
** EPITECH PROJECT, 2021
** my_a to int
** File description:
** array to int
*/

int my_atoi(char const *str)
{
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        res = str[i] - 48 + res * 10;
        i++;
    }
    return (res);
}