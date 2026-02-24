// Program to create a doubly circular linked list and display nodes.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};

int main(){
    struct node *head=NULL,*temp,*newnode;
    int n,i;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);

        if(head==NULL){
            head=newnode;
            head->next=head->prev=head;
        }
        else{
            temp=head->prev;
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=head;
            head->prev=newnode;
        }
    }

    printf("\nDoubly Circular List:\n");
    temp=head;
    do{
        printf("%d -> ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}