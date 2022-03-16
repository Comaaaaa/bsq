/*
** EPITECH PROJECT, 2021
** Power recursivity
** File description:
** power rec
*/

int my_compute_power_rec(int nb, int p)
{
    int i = 1;
    int res = nb;

    if (nb == 0) {
        return 1;
    }
    if (p < 0 || p > 12)
        return 0;
    if (p == 1)
        return (nb);
    while (i < p) {
        res = nb * my_compute_power_rec(nb, p - 1);
        return (res);
    }
}
