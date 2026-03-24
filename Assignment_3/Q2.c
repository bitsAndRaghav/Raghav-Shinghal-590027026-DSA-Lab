// Question 2
// Write a C program to implement a Stack using Linked List with Push, Pop and Display operations.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top = NULL;

void push()
{
    int val;

    printf("Enter value: ");
    scanf("%d",&val);

    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = val;
    newnode->next = top;

    top = newnode;
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    struct node* temp = top;

    printf("Deleted element: %d\n", temp->data);

    top = top->next;

    free(temp);
}

void display()
{
    struct node* temp = top;

    if(temp == NULL)
    {
        printf("Stack empty\n");
        return;
    }

    printf("Stack elements:\n");

    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        if(ch==1) push();
        else if(ch==2) pop();
        else if(ch==3) display();
        else if(ch==4) break;
        else printf("Wrong choice\n");
    }

    printf("Coded by- Raghav Shinghal");

    return 0;
}