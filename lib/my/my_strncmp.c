/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** str n compare
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int str1 = my_strlen(s1);
    int str2 = my_strlen(s2);

    if (n > str1 || n > str2)
        if (str1 != str2)
            return 1;
    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            return 1;
    return 0;
}