// Write a C program to insert a new element at a specified position in an array.

#include <stdio.h>

void main() {
    int n,i,pos,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n+1];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter position to insert: ");
    scanf("%d",&pos);
    printf("Enter value to insert: ");
    scanf("%d",&val);

    for(i=n;i>=pos;i--)
        a[i]=a[i-1];

    a[pos-1]=val;

    printf("\nPosition  Value\n");
    for(i=0;i<n+1;i++)
        printf("%5d %6d\n", i+1, a[i]);
}