/*
Write a C program to demonstrate the use of union by storing integer,
float, and character data and explain memory sharing.
*/

#include <stdio.h>

union data {
    int i;
    float f;
    char c;
};

void main() {
    union data d;

    printf("Enter integer value: ");
    scanf("%d",&d.i);
    printf("Stored integer: %d\n", d.i);

    printf("Enter float value: ");
    scanf("%f",&d.f);
    printf("Stored float: %.2f\n", d.f);

    printf("Enter character value: ");
    scanf(" %c",&d.c);
    printf("Stored character: %c\n", d.c);
}