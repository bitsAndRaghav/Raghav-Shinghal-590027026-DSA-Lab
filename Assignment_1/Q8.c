// Write a C program to delete an element from a specified position.

#include <stdio.h>

void main() {
    int n,i,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position to delete: ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    printf("\nIndex  Value\n");
    for(i=0;i<n-1;i++)
        printf("%5d %6d\n", i+1, a[i]);
}