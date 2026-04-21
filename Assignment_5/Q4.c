// Level order traversal using queue
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* newNode(int val) {
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = val;
    t->left = t->right = NULL;
    return t;
}

struct node* queue[100];
int front = -1, rear = -1;

void enqueue(struct node* n) {
    if (rear == 99) return;
    if (front == -1) front = 0;
    queue[++rear] = n;
}

struct node* dequeue() {
    if (front == -1 || front > rear) return NULL;
    return queue[front++];
}

void levelOrder(struct node* root) {
    enqueue(root);

    while (front <= rear) {
        struct node* temp = dequeue();
        printf("%d ", temp->data);

        if (temp->left) enqueue(temp->left);
        if (temp->right) enqueue(temp->right);
    }
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    printf("Level Order: ");
    levelOrder(root);

    return 0;
}