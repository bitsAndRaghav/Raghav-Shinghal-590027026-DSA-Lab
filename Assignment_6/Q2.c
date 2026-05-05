// Q2. Implement Binary Heap (Max Heap) using array
#include <stdio.h>

int heap[100];
int size = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// (i) Heap Creation: Initialize empty heap
void createHeap()
{
    size = 0;
    printf("Empty heap created.\n");
}

// (ii) Insertion (Heapify-Up): Insert element into heap
void insert(int val)
{
    if (size == 100)
    {
        printf("Heap is full\n");
        return;
    }

    int i = size;
    heap[size++] = val;

    while (i != 0 && heap[(i - 1) / 2] < heap[i])
    {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Heapify-Down helper
void heapifyDown(int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != i)
    {
        swap(&heap[i], &heap[largest]);
        heapifyDown(largest);
    }
}

// (iii) Deletion (Heapify-Down): Delete root element
void deleteRoot()
{
    if (size == 0)
    {
        printf("Heap is empty\n");
        return;
    }

    printf("Deleted root element: %d\n", heap[0]);
    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);
}

// (iv) Display Heap: Print heap elements
void display()
{
    if (size == 0)
    {
        printf("Heap is empty\n");
        return;
    }

    printf("Heap elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int main()
{
    int ch, val;

    createHeap();

    do
    {
        printf("\n1.Insert  2.Delete Root  3.Display  4.Exit");
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
            deleteRoot();
            break;

        case 3:
            display();
            break;
        }

    } while (ch != 4);

    printf("Coded by- Raghav Shinghal.");
    return 0;
}