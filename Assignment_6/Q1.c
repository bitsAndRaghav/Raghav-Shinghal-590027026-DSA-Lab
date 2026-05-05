// Q1. Implement Binary Search Tree (BST) using linked list representation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *createNode(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// (i) Insertion: Insert a node while maintaining BST properties
struct node *insert(struct node *root, int val)
{
    if (root == NULL)
        return createNode(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);
    else
        printf("Duplicate values not allowed.\n");

    return root;
}

struct node *minValueNode(struct node *temp)
{
    while (temp->left != NULL)
        temp = temp->left;
    return temp;
}

// (ii) Deletion: Delete a node from BST
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        // Case (a): Node is a leaf node
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        // Case (b): Node has one child
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // Case (c): Node has two children
        else
        {
            struct node *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

// (iii) Searching: Search an element in BST
int search(struct node *root, int key)
{
    if (root == NULL)
        return 0;

    if (root->data == key)
        return 1;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// (iv) Traversal: Inorder Traversal (Left -> Root -> Right)
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root = NULL;
    int ch, val;

    do
    {
        printf("\n1.Insert  2.Delete  3.Search  4.Inorder  5.Exit");
        printf("\nChoice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            root = insert(root, val);
            break;

        case 2:
            printf("Enter value to delete: ");
            scanf("%d", &val);
            root = deleteNode(root, val);
            break;

        case 3:
            printf("Enter value to search: ");
            scanf("%d", &val);
            if (search(root, val))
                printf("Element found\n");
            else
                printf("Element not found\n");
            break;

        case 4:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
        }

    } while (ch != 5);

    printf("Coded by- Raghav Shinghal.");
    return 0;
}