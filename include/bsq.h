/*
** EPITECH PROJECT, 2021
** infin.h
** File description:
** contain functions for the infin add
*/

#include "lib.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>

#ifndef INFIN_H_
    #define INFIN_H_

typedef struct bsq_s {
    int lines;
    int cols;
    int size;
    int **tab;
    char const *buffer;
    int error;
    int max;
} bsq_t;

char *open_file(char const *filepath, bsq_t *bsq);
int char_lines(char const *filepath, bsq_t *bsq);
int line_checker(char const *str);
int **tab_filler(char const *buffer, bsq_t *bs);
int **algorithm(char const *buffer, bsq_t *bs);
char **miaou_filler(char const *buffer, bsq_t *bs);
char **ouaf(char * buffer, bsq_t *bs);
int error(int ac, char **av);
void launcher(int ac, char **av);

#endif