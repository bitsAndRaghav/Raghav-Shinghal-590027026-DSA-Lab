/* Write a C program to dynamically allocate memory 
for an array of N integers and perform insertion, 
display sum and average operations.
*/
#include <stdio.h>
#include <stdlib.h>

void main() {
    int n,i,pos,val;
    int *arr;
    int sum=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    arr = (int*) malloc((n+1) * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter position to insert: ");
    scanf("%d",&pos);
    printf("Enter value to insert: ");
    scanf("%d",&val);

    for(i=n;i>pos-1;i--)
        arr[i]=arr[i-1];

    arr[pos-1]=val;
    n++;

    printf("Updated array:\n");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
        sum += arr[i];
    }

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", sum/(float)n);

    free(arr);
}