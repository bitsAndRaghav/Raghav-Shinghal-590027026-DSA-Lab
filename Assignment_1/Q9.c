// Write a C program to sort the elements of an array in ascending order.

#include <stdio.h>

void main() {
    int n,i,j;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i]<a[j]) {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}