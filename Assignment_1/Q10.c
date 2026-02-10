// Write a C program to merge two arrays into a single array.

#include <stdio.h>

void main() {
    int n1,n2,i;
    printf("Enter first size: ");
    scanf("%d",&n1);

    int a[n1];
    printf("Enter first array:\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter second size: ");
    scanf("%d",&n2);

    int b[n2], r[n1+n2];
    printf("Enter second array:\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1+n2;i++)
        r[i]=(i<n1)?a[i]:b[i-n1];

    printf("Merged array:\n");
    for(i=0;i<n1+n2;i++)
        printf("%d ",r[i]);
}