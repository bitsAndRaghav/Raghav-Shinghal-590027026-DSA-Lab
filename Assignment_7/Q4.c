/* Q4: Check directed or undirected */

#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;
    int a[10][10];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                flag = 0;

    if (flag) printf("Undirected Graph\n");
    else printf("Directed Graph\n");

    printf("Coded by : Raghav Shinghal");
    return 0;
}