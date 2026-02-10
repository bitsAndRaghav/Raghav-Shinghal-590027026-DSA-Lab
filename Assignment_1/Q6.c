// Write a C program to search for a given element in an array using linear search.

#include <stdio.h>

void main() {
    int n,i,key,found=0;
    printf("Enter size: ");
    scanf("%d",&n);

    int d[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);

    printf("Enter value to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
        if(d[i]==key)
            found=1;

    if(found)
        printf("Value exists");
    else
        printf("Value not found");
}