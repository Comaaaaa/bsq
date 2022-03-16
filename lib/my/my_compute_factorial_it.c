/*
** EPITECH PROJECT, 2021
** My Compute factorial it
** File description:
** iterative function that return factorial
*/

int my_compute_factorial_it(int nb)
{
    int res = nb;
    int i = 1;

    if (nb == 0)
        return 1;
    if (nb == 1)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    while (i < res) {
        nb = nb * (res - i);
        i++;
    }
    return (nb);
}
