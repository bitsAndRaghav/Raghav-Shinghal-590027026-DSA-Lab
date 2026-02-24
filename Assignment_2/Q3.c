// Program to create a singly linked list, perform insertion operations, and display final list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head=NULL,*temp,*newnode;
    int n,i,choice,value,after;

    printf("Enter number of initial nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
    }

    printf("\nInitial List:\n");
    display(head);

    printf("\nChoose Insertion Operation:\n");
    printf("1. Insert at Beginning\n2. Insert at End\n3. Insert After a Given Value\n");
    scanf("%d",&choice);

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(choice==1){
        newnode->next=head;
        head=newnode;
    }
    else if(choice==2){
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
    else if(choice==3){
        printf("Insert after which value: ");
        scanf("%d",&after);

        temp=head;
        while(temp!=NULL && temp->data!=after)
            temp=temp->next;

        if(temp!=NULL){
            newnode->next=temp->next;
            temp->next=newnode;
        }else{
            printf("Value not found. No insertion done.\n");
            free(newnode);
        }
    }

    printf("\nFinal List After Insertion:\n");
    display(head);

    return 0;
}