/* Q5: BFS traversal */

#include <stdio.h>

int queue[20], front = -1, rear = -1;

void enqueue(int x)
{
    if (rear == -1)
        front = rear = 0;
    else
        rear++;
    queue[rear] = x;
}

int dequeue()
{
    return queue[front++];
}

int main()
{
    int n, i, j, start;
    int a[10][10], visited[10] = {0};

    printf("Enter vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter start vertex: ");
    scanf("%d", &start);

    enqueue(start);
    visited[start] = 1;

    while (front <= rear)
    {
        int v = dequeue();
        printf("%d ", v);

        for (i = 0; i < n; i++)
        {
            if (a[v][i] == 1 && !visited[i])
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }

    printf("\nCoded by : Raghav Shinghal");
    return 0;
}