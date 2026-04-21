// Create binary tree using array and perform operations
#include <stdio.h>

#define SIZE 100

int tree[SIZE];
int n = 0;

void insert() {
    int val;
    printf("Enter value to insert: ");
    scanf("%d", &val);

    if (n >= SIZE) {
        printf("Tree is full\n");
        return;
    }

    tree[n] = val;
    n++;
}

void display() {
    if (n == 0) {
        printf("Tree is empty\n");
        return;
    }

    printf("Tree elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tree[i]);
    }
    printf("\n");
}

void relations() {
    int index;
    printf("Enter index of node: ");
    scanf("%d", &index);

    if (index >= n) {
        printf("Invalid index\n");
        return;
    }

    printf("Node: %d\n", tree[index]);

    if (index == 0)
        printf("No parent (root node)\n");
    else
        printf("Parent: %d\n", tree[(index - 1) / 2]);

    if (2 * index + 1 < n)
        printf("Left child: %d\n", tree[2 * index + 1]);
    else
        printf("No left child\n");

    if (2 * index + 2 < n)
        printf("Right child: %d\n", tree[2 * index + 2]);
    else
        printf("No right child\n");
}

int main() {
    int ch;

    do {
        printf("\n1.Insert\n2.Display\n3.Relations\n4.Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insert(); break;
            case 2: display(); break;
            case 3: relations(); break;
        }
    } while (ch != 4);

    return 0;
}