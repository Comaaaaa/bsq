/*
** EPITECH PROJECT, 2021
** ctoi
** File description:
** my_ctoi
*/

int ctoi(char c)
{
    int res = 0;
    res = c - 48 + res * 10;
    return (res);
}