// Write a program to implement Queue using Linked List with operations: Enqueue, Dequeue, Display, Peek.

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

// Enqueue Operation
void enqueue()
{
    struct node *newNode;
    int value;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Element inserted successfully\n");
}

// Dequeue Operation
void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }

    temp = front;
    printf("Deleted element = %d\n", front->data);

    front = front->next;
    free(temp);

    if (front == NULL)
    {
        rear = NULL;
    }
}

// Display Operation
void display()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = front;

    printf("Queue elements are: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Peek Operation
void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element = %d\n", front->data);
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    printf("\nCoded by- Raghav Shinghal");

    return 0;
}