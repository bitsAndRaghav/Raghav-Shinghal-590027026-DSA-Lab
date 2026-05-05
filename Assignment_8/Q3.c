/* Q3: Insertion Sort */

#include <stdio.h>

int main()
{
    int n, i, j, key;
    int a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        printf("Pass %d: ", i);
        for(j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }

    printf("Coded by : Raghav Shinghal");
    return 0;
}