/*
** EPITECH PROJECT, 2021
** square root
** File description:
** day 5 square root
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb == 1)
        return 1;

    while ((i * i) != nb) {
        i++;
    }
    return i;
}
