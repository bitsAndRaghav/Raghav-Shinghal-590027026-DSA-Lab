/* 
Question: Create a singly linked list in C, count nodes, and search for a specific value's position.
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
    int target, pos = 1, found = 0;

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
        printf("%d ", current->val);
        total++;
        current = current->next_node;
    }
    printf("\nCount: %d\n", total);

    printf("\nEnter value to search: ");
    scanf("%d", &target);

    current = head;
    while (current != NULL) {
        if (current->val == target) {
            printf("Value %d found at position: %d\n", target, pos);
            found = 1;
            break; 
        }
        current = current->next_node;
        pos++;
    }

    if (!found) {
        printf("Value %d not found in the list.\n", target);
    }

    current = head;
    while (current != NULL) {
        struct Node *to_delete = current;
        current = current->next_node;
        free(to_delete);
    }

    return 0;
}