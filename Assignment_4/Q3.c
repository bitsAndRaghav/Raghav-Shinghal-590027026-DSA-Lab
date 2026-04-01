// Write a program to check whether a given string is a palindrome or not using an Array and a Queue data structure.

#include <stdio.h>
#include <string.h>

#define MAX 100

char queue[MAX];
int front = 0, rear = -1;

void enqueue(char ch)
{
    rear++;
    queue[rear] = ch;
}

char dequeue()
{
    char ch;
    ch = queue[front];
    front++;
    return ch;
}

int main()
{
    char str[MAX], reversed[MAX];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        enqueue(str[i]);
    }

    for (i = length - 1; i >= 0; i--)
    {
        reversed[i] = dequeue();
    }

    reversed[length] = '\0';

    for (i = 0; i < length; i++)
    {
        if (str[i] != reversed[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    printf("\nCoded by- Raghav Shinghal");

    return 0;
}