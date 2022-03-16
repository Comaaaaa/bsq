/*
** EPITECH PROJECT, 2021
** my swap function
** File description:
** Function that swaps the content of two integers
*/

void  my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}