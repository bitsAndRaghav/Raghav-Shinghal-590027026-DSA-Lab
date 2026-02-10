/* Write a C program to dynamically allocate memory 
for a 2D matrix and perform matrix addition and subtraction.
*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    int r,c,i,j;
    int **a, **b, **add, **sub;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);

    a = (int**) malloc(r * sizeof(int*));
    b = (int**) malloc(r * sizeof(int*));
    add = (int**) malloc(r * sizeof(int*));
    sub = (int**) malloc(r * sizeof(int*));

    for(i=0;i<r;i++) {
        a[i] = (int*) malloc(c * sizeof(int));
        b[i] = (int*) malloc(c * sizeof(int));
        add[i] = (int*) malloc(c * sizeof(int));
        sub[i] = (int*) malloc(c * sizeof(int));
    }

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++) {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }

    printf("Addition result:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", add[i][j]);
        printf("\n");
    }

    printf("Subtraction result:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++) {
        free(a[i]);
        free(b[i]);
        free(add[i]);
        free(sub[i]);
    }

    free(a);
    free(b);
    free(add);
    free(sub);
}
