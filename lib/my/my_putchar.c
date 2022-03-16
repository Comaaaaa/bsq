/*
** EPITECH PROJECT, 2021
** my putchar
** File description:
** putchar2021
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}
