// Enter marks of students in 5 subjects using 2D array and print total and percentage.

#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int m[n][5];

    for(i=0;i<n;i++) {
        printf("Enter marks of Student %d (5 subjects): ", i+1);
        for(j=0;j<5;j++)
            scanf("%d", &m[i][j]);
    }

    printf("\nStudent  Total  Percentage\n");

    for(i=0;i<n;i++) {
        int sum=0;
        for(j=0;j<5;j++)
            sum += m[i][j];
        printf("%7d %6d %10.2f\n", i+1, sum, sum/5.0);
    }
}