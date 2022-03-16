/*
** EPITECH PROJECT, 2021
** Compute power it
** File description:
** power
*/

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int res = nb;

    if (nb == 0)
        return 1;

    if (p < 0 || p > 12)
        return 0;

    if (p == 1)
        return (nb);

    while (i < p) {
        res = res * nb;
        i++;
    }
    return (res);
}
