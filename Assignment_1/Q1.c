// Write a C program to read n elements into an array and display the elements using a for loop.

#include <stdio.h>

void main() {
    int n,k;
    printf("Enter size: ");
    scanf("%d",&n);

    int x[n];

    printf("Enter values:\n");
    for(k=0;k<n;k++)
        scanf("%d",&x[k]);

    printf("Array:\n");
    for(k=0;k<n;k++)
        printf("%d ",x[k]);
}