/* Write a C program to dynamically allocate an 
array and find the largest and smallest element.
*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    int n,i;
    int *a;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    a = (int*) malloc(n * sizeof(int));

    if(a == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[0], min=a[0];

    for(i=1;i<n;i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d", min);

    free(a);
}