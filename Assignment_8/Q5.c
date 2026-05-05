/* Q5: Quick Sort */

#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[low], i = low + 1, j = high, temp;

    while(1)
    {
        while(i <= high && a[i] <= pivot) i++;
        while(a[j] > pivot) j--;

        if(i >= j) break;

        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int n, i, a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nCoded by : Raghav Shinghal");
    return 0;
}