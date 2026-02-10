// Enter marks of students in 5 subjects using 2D array 
// and print total and percentage.

#include <stdio.h>

void main() {
    int n,i,j;
    printf("Enter students count: ");
    scanf("%d",&n);

    int m[n][5];

    for(i=0;i<n;i++) {
        printf("Enter 5 marks for student %d:\n",i+1);
        for(j=0;j<5;j++)
            scanf("%d",&m[i][j]);
    }

    printf("\nTotal and percentage:\n");
    for(i=0;i<n;i++) {
        int t=0;
        for(j=0;j<5;j++)
            t+=m[i][j];
        printf("%d %.2f\n",t,t/5.0);
    }
}