// Write a C program to display the elements of an array in reverse order.

#include <stdio.h>

void main() {
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nIndex  Value\n");
    for(i=n-1;i>=0;i--)
        printf("%5d %6d\n", i, a[i]);
}