/* Q6: Linear Search */

#include <stdio.h>

int main()
{
    int n, i, key, found = 0;
    int a[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Element not found\n");

    printf("Coded by : Raghav Shinghal");
    return 0;
}