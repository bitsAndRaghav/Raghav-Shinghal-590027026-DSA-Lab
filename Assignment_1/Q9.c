/*
Write a C program to show the difference in memory allocation
between structure and union using sizeof().
*/

#include <stdio.h>

struct sample_struct {
    int a;
    float b;
    char c;
};

union sample_union {
    int a;
    float b;
    char c;
};

void main() {
    struct sample_struct s;
    union sample_union u;

    printf("Size of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));
}