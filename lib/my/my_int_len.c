/*
** EPITECH PROJECT, 2021
** my int len
** File description:
** int len
*/

int int_size(int value)
{
    int i = 0;

    while (value != 0) {
        value = value /10;
        i++;
    }
    return (i);
}