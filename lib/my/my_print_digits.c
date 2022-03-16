/*
** EPITECH PROJECT, 2021
** My print digits
** File description:
** Function that can print digits
*/

int my_putchar(char c);

int my_print_digits(void)
{
    int c = 48;

    while (c != 58 ) {
        my_putchar(c);
        c += 1;
    }
    return 0;
}
