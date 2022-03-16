/*
** EPITECH PROJECT, 2021
** algo
** File description:
** algo for the bsq project
*/

#include "bsq.h"

int **algorithm(char const *buffer, bsq_t *bs)
{
    int **tab = tab_filler(buffer, bs);
    int x;
    int y;
    int min = 0;
    int max = 0;

    for (y = 1; y < bs->lines; y++) {
        for (x = 1; x < bs->cols; x++) {
            if (tab[y][x] > 0) {
                if (tab[y][x - 1] <= tab[y - 1][x - 1] && tab[y][x - 1] <= tab[y - 1][x])
                    min = tab[y][x - 1];
                else if (tab[y - 1][x] <= tab[y - 1][x - 1] && tab[y - 1][x] <= tab[y][x - 1])
                    min = tab[y - 1][x];
                else if (tab[y - 1][x - 1] <= tab[y][x - 1] && tab[y - 1][x - 1] <= tab[y - 1][x])
                    min = tab[y - 1][x - 1];
                tab[y][x] = 1 + min;
                if (tab[y][x] > max) {
                    max = tab[y][x];
                }
            }
        }
    }
    bs->max = max;
    return (tab);
}

char **malloc_miaou(char const *buffer, bsq_t *bs)
{
    int i = 0;
    int size = char_lines(buffer, bs);
    buffer = bs->buffer;
    char **tab = malloc(sizeof(char *) * (bs->lines + 1));

    if (tab == NULL) {
        return (NULL);
        bs->error = 84;
    }
    for (i = 0; buffer[i] != '.' && buffer[i] != 'o'; i++);
    for (int x = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            tab[x] = malloc(sizeof(char) * (bs->cols + 1));
            x++;
        }
    }
    tab[bs->lines] = NULL;
    return (tab);
}

char **miaou_filler(char const *buffer, bsq_t *bs)
{
    int y = 0;
    int x = 0;
    int i = 0;
    char **empty_tab = malloc_miaou(buffer, bs);
    buffer = bs->buffer;

    for (i = 0; buffer[i] != '.' && buffer[i] != 'o'; i++);
    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] == '.')
            empty_tab[y][x] = '.';
        if (buffer[i] == 'o') {
            empty_tab[y][x] = 'o';
        }
        if (buffer[i] == '\n') {
            y++;
            x = 0;
            continue;
        }
        x++;
    }
    return (empty_tab);
}

char **ouaf(char * buffer, bsq_t *bs)
{
    int **tab = algorithm(buffer, bs);
    char **map = miaou_filler(buffer, bs);
    int y;
    int x;
    int resy = 0;
    int resx = 0;

    for (y = 0; tab[y] != NULL && tab[y][x] != bs->max; y++) {
        for (x = 0; x < bs->cols; x++) {
            if (tab[y][x] == bs->max) {
                bs->max = tab[y][x];
                resx = x;
                resy = y;
                break;
            }
        }
    }
    for (int y = resy; y != resy - bs->max; y--) {
        for (int x = resx; x != resx - bs->max; x--)
            map[y][x] = 'x';
    }
    return(map);
}
