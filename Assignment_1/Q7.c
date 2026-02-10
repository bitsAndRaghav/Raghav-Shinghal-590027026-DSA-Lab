// Write a C program to insert a new element at a specified position in an array.

#include <stdio.h>

void main() {
    int n,i,p,val;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n+1];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position: ");
    scanf("%d",&p);
    printf("Enter value: ");
    scanf("%d",&val);

    for(i=n;i>p-1;i--)
        a[i]=a[i-1];

    a[p-1]=val;

    printf("Updated array:\n");
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
}