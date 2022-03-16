/*
** EPITECH PROJECT, 2021
** put_nbr
** File description:
** function that can display basic numbers;
*/

int my_putchar(char c);

int racaille(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    else if (nb < 0) {
        my_putchar('-');
        nb = (nb * -1);
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    nb = racaille(nb);

    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
}