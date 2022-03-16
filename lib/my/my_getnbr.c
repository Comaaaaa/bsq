/*
** EPITECH PROJECT, 2021
** My getnbr
** File description:
** My a to int function that return an int from array
*/

int my_getnbr(char const *str)
{
    int res = 0;
    int i = 0;
    int symb = 1;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-') {
            symb *= -1;
        }
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res += str[i] - 48;
        res *= 10;
        i++;
        if (symb * res / 10 > 2147483648) {
            return 0;
        }
    }
    i = symb * res/10;
    return (i);
}
