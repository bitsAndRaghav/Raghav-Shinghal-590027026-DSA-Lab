// Question 4
// Write a program to check whether an expression is balanced or not using stack with array.

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    if(top==-1)
        return '#';

    return stack[top--];
}

int main()
{
    char exp[100];

    printf("Enter expression: ");
    scanf("%s",exp);

    int len = strlen(exp);

    for(int i=0;i<len;i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(exp[i]);
        }

        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            char ch = pop();

            if((exp[i]==')' && ch!='(') ||
               (exp[i]=='}' && ch!='{') ||
               (exp[i]==']' && ch!='['))
            {
                printf("Not Balanced\n");
                printf("Coded by- Raghav Shinghal");
                return 0;
            }
        }
    }

    if(top==-1)
        printf("Balanced Expression\n");
    else
        printf("Not Balanced\n");

    printf("Coded by- Raghav Shinghal");

    return 0;
}