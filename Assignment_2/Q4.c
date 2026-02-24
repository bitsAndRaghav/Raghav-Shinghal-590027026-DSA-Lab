// Program to create a singly linked list, perform deletion, and display final list.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *head){
    while(head){
        printf("%d -> ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head=NULL,*temp,*prev,*newnode;
    int n,i,choice,value;

    printf("Enter number of initial nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){ head=temp=newnode; }
        else{ temp->next=newnode; temp=newnode; }
    }

    printf("\nInitial List:\n");
    display(head);

    printf("\nChoose Deletion Operation:\n");
    printf("1. Delete from Beginning\n2. Delete from End\n3. Delete After a Given Value\n");
    scanf("%d",&choice);

    if(choice==1){
        temp=head;
        head=head->next;
        free(temp);
    }
    else if(choice==2){
        temp=head;
        while(temp->next){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
    else if(choice==3){
        printf("Delete node after value: ");
        scanf("%d",&value);

        temp=head;
        while(temp && temp->data!=value)
            temp=temp->next;

        if(temp && temp->next){
            struct node *del=temp->next;
            temp->next=del->next;
            free(del);
        }
        else printf("Deletion not possible\n");
    }

    printf("\nFinal List After Deletion:\n");
    display(head);
}