// Non-recursive inorder and preorder using stack
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

struct node* stack[100];
int top = -1;

void push(struct node* n) {
    stack[++top] = n;
}

struct node* pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void inorder(struct node* root) {
    struct node* curr = root;

    while (curr != NULL || !isEmpty()) {
        while (curr != NULL) {
            push(curr);
            curr = curr->left;
        }
        curr = pop();
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

void preorder(struct node* root) {
    if (root == NULL) return;

    push(root);
    while (!isEmpty()) {
        struct node* temp = pop();
        printf("%d ", temp->data);

        if (temp->right) push(temp->right);
        if (temp->left) push(temp->left);
    }
}

int main() {
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    printf("Inorder: ");
    inorder(root);

    top = -1;

    printf("\nPreorder: ");
    preorder(root);

    return 0;
}