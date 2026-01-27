//Question 1
#include <stdio.h>

int main()
{
    int a[20][3];   // [student][sub1, sub2, total]
    int i;

    for(i = 0; i < 20; i++)
    {
        printf("\nEnter marks for Student %d\n", i + 1);

        // Input Subject 1
        do {
            printf("Subject 1: ");
            scanf("%d", &a[i][0]);
        } while(a[i][0] < 0 || a[i][0] > 100);

        // Input Subject 2
        do {
            printf("Subject 2: ");
            scanf("%d", &a[i][1]);
        } while(a[i][1] < 0 || a[i][1] > 100);

        // Calculate total
        a[i][2] = a[i][0] + a[i][1];
    }

    // Display table
    printf("\n\nStudent\tSub1\tSub2\tTotal(/200)\n");

    for(i = 0; i < 20; i++)
    {
        printf("S%d\t%d\t%d\t%d\n",
               i + 1, a[i][0], a[i][1], a[i][2]);
    }

    return 0;
}