/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** cat a string
*/

int my_strlen(char *str);

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int x = my_strlen(dest);

    while (src[i] != '\0') {
        dest[x + i] = src[i];
        i++;
    }
    dest[i + x] = '\0';
    return (dest);
}
