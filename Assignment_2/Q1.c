// Program to traverse a singly linked list and count number of nodes.

#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main() {
    struct node *head=NULL,*temp,*newnode;
    int n,i,count=0;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){ head=temp=newnode; }
        else{ temp->next=newnode; temp=newnode; }
    }

    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        count++;
        temp=temp->next;
    }
    printf("NULL\nTotal nodes = %d",count);
}