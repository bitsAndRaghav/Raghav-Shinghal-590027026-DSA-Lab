// Program to create a doubly linked list and perform forward and backward traversal.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
};

int main(){
    struct node *head=NULL,*temp,*newnode;
    int n,i,count=0;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->prev=NULL;
        newnode->next=head;
        if(head) head->prev=newnode;
        head=newnode;
    }

    printf("\nForward Traversal:\n");
    temp=head;
    while(temp){
        printf("%d -> ",temp->data);
        if(!temp->next) break;
        temp=temp->next;
        count++;
    }

    printf("NULL\nBackward Traversal:\n");
    while(temp){
        printf("%d -> ",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");
}