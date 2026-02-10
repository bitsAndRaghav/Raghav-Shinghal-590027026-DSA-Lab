/* 
Question: Create a singly linked list in C, count the nodes, and display their values.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next_node;
};

int main() {
    struct Node *head = NULL, *current = NULL, *temp = NULL;
    int keep_going = 1, total = 0;

    while (keep_going) {
        temp = (struct Node *)malloc(sizeof(struct Node));
        
        if (!temp) return 1;

        printf("Input value: ");
        scanf("%d", &temp->val);
        temp->next_node = NULL;

        if (head == NULL) {
            head = current = temp;
        } else {
            current->next_node = temp;
            current = temp;
        }

        printf("Add more? (1/0): ");
        scanf("%d", &keep_going);
    }

    printf("\nList Data: ");
    current = head;
    while (current != NULL) {
        printf("%d->", current->val);
        total++;
        current = current->next_node;
    }

    printf("\nCount: %d\n", total);

    current = head;
    while (current != NULL) {
        struct Node *to_delete = current;
        current = current->next_node;
        free(to_delete);
    }

    return 0;
}