//Impliment 4 two dimensional array using dynamic memory allocation in C. Store input elements in array a and b, and calculate and store the sum and difference in c and d.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int **a = (int **)malloc(r * sizeof(int *));
    int **b = (int **)malloc(r * sizeof(int *));
    int **sum = (int **)malloc(r * sizeof(int *));
    int **diff = (int **)malloc(r * sizeof(int *));
    for(i = 0; i < r; i++) 
    {
        a[i] = (int *)malloc(c * sizeof(int));
        b[i] = (int *)malloc(c * sizeof(int));
        sum[i] = (int *)malloc(c * sizeof(int));
        diff[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter elements for array A:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for array B:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Sum of arrays A and B:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Difference of arrays A and B:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < r; i++) 
    {
        free(a[i]); free(b[i]); free(sum[i]); free(diff[i]);
    }

    free(a); free(b); free(sum); free(diff);

    return 0;
}