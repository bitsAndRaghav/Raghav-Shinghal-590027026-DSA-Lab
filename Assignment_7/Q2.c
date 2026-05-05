/* Q2: Hash table operations */

#include <stdio.h>

#define SIZE 10

int table[SIZE];

int hash(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int i = hash(key);
    while (table[i] != 0)
        i = (i + 1) % SIZE;
    table[i] = key;
}

void search(int key)
{
    int i = hash(key), count = 0;
    while (table[i] != 0 && count < SIZE)
    {
        if (table[i] == key)
        {
            printf("Found\n");
            return;
        }
        i = (i + 1) % SIZE;
        count++;
    }
    printf("Not Found\n");
}

void deleteKey(int key)
{
    int i = hash(key), count = 0;
    while (table[i] != 0 && count < SIZE)
    {
        if (table[i] == key)
        {
            table[i] = 0;
            printf("Deleted\n");
            return;
        }
        i = (i + 1) % SIZE;
        count++;
    }
    printf("Not Found\n");
}

int main()
{
    int choice, key;

    while (1)
    {
        printf("\n1.Insert 2.Search 3.Delete 4.Exit\n");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter key: ");
        scanf("%d", &key);

        if (choice == 1) insert(key);
        else if (choice == 2) search(key);
        else if (choice == 3) deleteKey(key);
    }

    printf("Coded by : Raghav Shinghal");
    return 0;
}