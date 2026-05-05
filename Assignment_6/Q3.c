// Q3. Implement Priority Queue using Binary Heap
#include <stdio.h>

int pq[100];
int size = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// (i) Create Priority Queue
void createQueue()
{
    size = 0;
    printf("Priority Queue created.\n");
}

// (ii) Insertion: Insert element with priority
void insert(int val)
{
    if (size == 100)
    {
        printf("Queue is full\n");
        return;
    }

    int i = size;
    pq[size++] = val;

    while (i != 0 && pq[(i - 1) / 2] < pq[i])
    {
        swap(&pq[i], &pq[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Heapify helper after deletion
void heapify(int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && pq[left] > pq[largest])
        largest = left;

    if (right < size && pq[right] > pq[largest])
        largest = right;

    if (largest != i)
    {
        swap(&pq[i], &pq[largest]);
        heapify(largest);
    }
}

// (iii) Deletion: Remove highest priority element
void deleteHighest()
{
    if (size == 0)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted highest priority element: %d\n", pq[0]);
    pq[0] = pq[size - 1];
    size--;
    heapify(0);
}

// (iv) Peek: Show highest priority element
void peek()
{
    if (size == 0)
        printf("Queue is empty\n");
    else
        printf("Highest Priority Element: %d\n", pq[0]);
}

// (v) Display queue elements
void display()
{
    if (size == 0)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", pq[i]);

    printf("\n");
}

int main()
{
    int ch, val;

    createQueue();

    do
    {
        printf("\n1.Insert  2.Delete  3.Peek  4.Display  5.Exit");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            insert(val);
            break;

        case 2:
            deleteHighest();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        }

    } while (ch != 5);

    printf("Coded by- Raghav Shinghal.");
    return 0;
}