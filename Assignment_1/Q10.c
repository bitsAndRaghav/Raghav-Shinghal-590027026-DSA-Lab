// Write a C program to merge two arrays into a single array.

#include <stdio.h>

void main() {
    int n1,n2,i;
    printf("Enter size of first array: ");
    scanf("%d",&n1);

    int a[n1];
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter size of second array: ");
    scanf("%d",&n2);

    int b[n2], c[n1+n2];
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(i=0;i<n2;i++)
        c[n1+i]=b[i];

    printf("\nIndex  Value\n");
    for(i=0;i<n1+n2;i++)
        printf("%5d %6d\n", i+1, c[i]);
}