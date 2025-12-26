#include "../include/center.h"

void print_centered(char *line, int content_size)
{
    int offset = (WIDTH - content_size) / 2;

    printf("\r");

    for (int i = 0; i < offset; i++)
        putchar(' ');

    for (int i = 0; i < content_size; i++)
        putchar(line[i]);

    fflush(stdout);
}
