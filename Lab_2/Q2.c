//Question 2
#include <stdio.h>

int main()
{
    int marks[5][5];   // 5 students, 5 subjects
    int i, j;
    int total[5];
    float percentage[5];

    // Input marks
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter marks for Student %d:\n", i + 1);
        total[i] = 0;

        for(j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            // Validation (max = 100)
            if(marks[i][j] < 0 || marks[i][j] > 100)
            {
                printf("Invalid marks! Enter again.\n");
                j--;
                continue;
            }

            total[i] += marks[i][j];
        }
        percentage[i] = total[i] / 5.0;
    }

    printf("\n\nResult:\n");
    printf("Student\tS1\tS2\tS3\tS4\tS5\tTotal\tPercentage\n");

    for(i = 0; i < 5; i++)
    {
        printf("S%d\t", i + 1);

        for(j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
        }

        printf("%d\t%.2f%%\n", total[i], percentage[i]);
    }

    return 0;
}