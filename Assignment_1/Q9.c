// Write a C program to sort the elements of an array in ascending order.

#include <stdio.h>

void main() {
    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]) {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

    printf("\nIndex  Value\n");
    for(i=0;i<n;i++)
        printf("%5d %6d\n", i+1, a[i]);
}