// Write a program to implement a Stack using two Queues (array) with operations: Push, Pop, Peek, isEmpty, Display.

#include <stdio.h>

#define MAX 100

int q1[MAX], q2[MAX];
int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;

int isEmpty()
{
    if (rear1 < front1)
        return 1;
    else
        return 0;
}

void push()
{
    int value, i;

    printf("Enter value to push: ");
    scanf("%d", &value);

    rear2++;
    q2[rear2] = value;

    for (i = front1; i <= rear1; i++)
    {
        rear2++;
        q2[rear2] = q1[i];
    }

    front1 = 0;
    rear1 = rear2;

    for (i = front1; i <= rear1; i++)
    {
        q1[i] = q2[i];
    }

    front2 = 0;
    rear2 = -1;

    printf("Element pushed successfully\n");
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element = %d\n", q1[front1]);
    front1++;
}

void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element = %d\n", q1[front1]);
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are: ");
    for (i = front1; i <= rear1; i++)
    {
        printf("%d ", q1[i]);
    }
    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. isEmpty\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 6);

    printf("\nCoded by- Raghav Shinghal");

    return 0;
}