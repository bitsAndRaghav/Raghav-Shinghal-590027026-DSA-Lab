// Question 6
// Write a C program to evaluate a postfix expression using stack.

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    stack[++top] = val;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[100];

    printf("Enter postfix expression: ");
    scanf("%s",exp);

    int i=0;

    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }

        else
        {
            int b = pop();
            int a = pop();

            if(exp[i]=='+') push(a+b);
            else if(exp[i]=='-') push(a-b);
            else if(exp[i]=='*') push(a*b);
            else if(exp[i]=='/') push(a/b);
        }

        i++;
    }

    printf("Result = %d\n", pop());

    printf("Coded by- Raghav Shinghal");

    return 0;
}