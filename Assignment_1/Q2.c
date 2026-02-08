// Suppose there are 20 students in a class. Enter marks of the students in 2 subjects and print total marks.

#include <stdio.h>

void main() {
    int m[20][2], i;

    for(i=0;i<20;i++) {
        printf("Enter marks of Student %d (Subject 1 and Subject 2): ", i+1);
        scanf("%d%d", &m[i][0], &m[i][1]);
    }

    printf("\nStudent  Sub1  Sub2  Total\n");

    for(i=0;i<20;i++) {
        printf("%7d %5d %5d %6d\n", i+1, m[i][0], m[i][1], m[i][0]+m[i][1]);
    }
}