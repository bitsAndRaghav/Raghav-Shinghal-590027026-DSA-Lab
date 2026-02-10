// Write a C program to find the largest and smallest 
// elements of an array.

#include <stdio.h>

void main() {
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);

    int v[n];
    printf("Enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);

    int hi=v[0], lo=v[0];

    for(i=1;i<n;i++) {
        if(v[i]>hi) hi=v[i];
        if(v[i]<lo) lo=v[i];
    }

    printf("Largest: %d\nSmallest: %d",hi,lo);
}