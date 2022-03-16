/*
** EPITECH PROJECT, 2021
** Compute fact rec
** File description:
** recusrive that return factorial guven as a par
*/

int my_compute_factorial_rec(int nb)
{
    int res;

    if (nb == 0 || nb == 1)
        return (1);

    if (nb < 0 || nb > 12) {
        return (0);
    }

    res = nb * my_compute_factorial_rec(nb - 1);
    return (res);
}
