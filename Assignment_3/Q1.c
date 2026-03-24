// Question 1
// Write a C program to implement a Stack using an array with operations Push, Pop and Display.

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push()
{
    int val;

    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d",&val);

    top++;
    stack[top] = val;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", stack[top]);
    top--;
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
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
        else printf("Invalid choice\n");
    }

    printf("Coded by- Raghav Shinghal");

    return 0;
}