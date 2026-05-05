/* Q2: Selection Sort */

#include <stdio.h>

int main()
{
    int n, i, j, min, temp, comp = 0, swap = 0;
    int a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            comp++;
            if(a[j] < a[min])
                min = j;
        }

        if(min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            swap++;
        }

        printf("Pass %d: ", i + 1);
        for(j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }

    printf("Comparisons: %d\n", comp);
    printf("Swaps: %d\n", swap);

    printf("Coded by : Raghav Shinghal");
    return 0;
}