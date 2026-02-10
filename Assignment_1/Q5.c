// Write a C program to display the elements of an array in reverse order.

#include <stdio.h>

void main() {
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Reverse:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}