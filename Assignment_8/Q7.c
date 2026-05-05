/* Q7: Binary Search using recursion */

#include <stdio.h>

int binarySearch(int a[], int l, int r, int key)
{
    if(l <= r)
    {
        int mid = (l + r) / 2;

        if(a[mid] == key)
            return mid;
        else if(a[mid] > key)
            return binarySearch(a, l, mid - 1, key);
        else
            return binarySearch(a, mid + 1, r, key);
    }
    return -1;
}

int main()
{
    int n, i, key, res;
    int a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    res = binarySearch(a, 0, n - 1, key);

    if(res != -1)
        printf("Found at index %d\n", res);
    else
        printf("Element not found\n");

    printf("Coded by : Raghav Shinghal");
    return 0;
}