/*
** EPITECH PROJECT, 2021
** My print alpha
** File description:
** Function that can print the alphabet
*/

int my_putchar(char c);

int my_print_alpha(void)
{
    int c = 97;

    while (c != 123 ) {
        my_putchar(c);
        c += 1;
    }
    return 0;
}
