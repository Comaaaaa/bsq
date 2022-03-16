/*
** EPITECH PROJECT, 2021
** My revalpha
** File description:
** function that print the alphabet backward
*/

int my_putchar(char c);

int my_print_revalpha(void)
{
    int c = 122;

    while (c != 96 ) {
        my_putchar(c);
        c -= 1;
    }
    return 0;
}
