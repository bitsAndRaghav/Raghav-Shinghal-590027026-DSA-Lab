// Write a C program to search for a given element using linear search.

#include <stdio.h>

void main() {
    int n,i,key,pos=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
        if(a[i]==key) {
            pos=i;
            break;
        }

    if(pos!=-1)
        printf("Element found at position %d", pos+1);
    else
        printf("Element not found");
}