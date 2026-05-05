/* Q3: Adjacency matrix and degree */

#include <stdio.h>

int main()
{
    int n, i, j, v, in = 0, out = 0;
    int a[10][10];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Enter vertex: ");
    scanf("%d", &v);

    for (i = 0; i < n; i++)
    {
        if (a[i][v] == 1) in++;
        if (a[v][i] == 1) out++;
    }

    printf("In-degree: %d\n", in);
    printf("Out-degree: %d\n", out);

    printf("Coded by : Raghav Shinghal");
    return 0;
}