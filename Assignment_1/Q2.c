// Suppose there are 20 students in a class. Enter marks of the 
// students in 2 subjects and print total marks.

#include <stdio.h>

void main() {
    int s=20,i;
    int a[s], b[s];

    for(i=0;i<s;i++) {
        printf("Student %d - Enter marks in Subject 1: ",i+1);
        scanf("%d",&a[i]);
        printf("Student %d - Enter marks in Subject 2: ",i+1);
        scanf("%d",&b[i]);
    }

    printf("\nTotal marks:\n");
    for(i=0;i<s;i++)
        printf("%d ",a[i]+b[i]);
}