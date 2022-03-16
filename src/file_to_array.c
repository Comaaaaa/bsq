/*
** EPITECH PROJECT, 2021
** BSQ project Sbassaler
** File description:
** Part one of bsq project
*/

#include "bsq.h"

int line_checker(char const *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++) {
        if (str[i] != '.' && str[i] != 'o') {
            return 1;
        }
    }
    return 0;
}

char *open_file(char const *filepath, bsq_t *bsq)
{
    char *buffer = NULL;
    struct stat len;

    stat(filepath, &len);
    buffer = malloc(sizeof(char) * (len.st_size + 1));
    bsq->buffer = malloc(sizeof(char) * (len.st_size + 1));
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        bsq->error = 84;
        return NULL;
    }
    read(fd, buffer, len.st_size);
    buffer[len.st_size] = '\0';
    bsq->buffer = buffer;
    return (buffer);
}

int char_lines(char const *file, bsq_t *bs)
{
    char const *str = open_file(file, bs);
    int i = 0;
    int col = 0;
    int nb = 0;
    int char_line = 0;

    if (str == NULL) {
        bs->error = 84;
        return 0;
    }
   for (i = 0; str[i] != '.' && str[i] != 'o'; i++);
    for (; str[col + i] != '\n'; col++);
    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            nb++;
        }
    }
    nb++;
    bs->cols = col;
    bs->lines = nb - 1;
    return (nb - 1);
}

int **malloc_tab(char const *buffer, bsq_t *bs)
{
    int i = 0;
    int size = char_lines(buffer, bs);
    buffer = bs->buffer;
    int **tab = malloc(sizeof(int *) * (bs->lines + 1));

    if (tab == NULL) {
        return (NULL);
        bs->error = 84;
    }
    for (i = 0; buffer[i] != '.' && buffer[i] != 'o'; i++);
    for (int x = 0; buffer[i] != '\0'; i++) {
          if (buffer[i] == '\n') {
            tab[x] = malloc(sizeof(int) * (bs->cols + 1));
            x++;
        }
    }
    tab[bs->lines] = NULL;
    return (tab);
}

int **tab_filler(char const *buffer, bsq_t *bs)
{
    int y = 0;
    int x = 0;
    int i = 0;
    int **empty_tab = malloc_tab(buffer, bs);
    buffer = bs->buffer;

    for (i = 0; buffer[i] != '.' && buffer[i] != 'o'; i++);
    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] == '.')
            empty_tab[y][x] = 1;
        if (buffer[i] == 'o')
            empty_tab[y][x] = 0;
        if (buffer[i] == '\n') {
            y++;
            x = 0;
            continue;
        }
        x++;
    }
    return (empty_tab);
}
