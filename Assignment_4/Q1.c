#include<stdio.h>
#define MAX 5

int queue[MAX];
int front= -1;
int rear= -1;

void enqueue()
{
    int value;
    if(rear==MAX-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the value to be inserted: ");
        scanf("%d",&value);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted element: %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for(int i=front; i<=rear; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front element: %d\n",queue[front]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n" );
        printf("Enter your choice(1-5): ");
        scanf("%d", &ch);
        
        switch(ch)
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
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (ch!=5);
    printf("Coded by: Raghav Shinghal\n");
    return 0;
}