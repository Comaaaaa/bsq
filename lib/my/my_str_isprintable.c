/*
** EPITECH PROJECT, 2021
** Isalpha
** File description:
** return if is alpha
*/

int  my_str_isprintable(char  const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~') {
            return 0;
        }
        i++;
    }
    return 1;
}