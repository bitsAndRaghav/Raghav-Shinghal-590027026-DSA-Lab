// Write a C program to delete an element from a specified position.

#include <stdio.h>

void main() {
    int n,i,p;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&p);

    for(i=p-1;i<n-1;i++)
        a[i]=a[i+1];

    printf("After deletion:\n");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}