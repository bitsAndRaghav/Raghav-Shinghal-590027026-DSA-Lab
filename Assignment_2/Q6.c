// Program to create a circular singly linked list and display with node count.

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
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

        if(head==NULL){
            head=temp=newnode;
            newnode->next=head;
        }
        else{
            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
        }
    }

    printf("\nCircular List:\n");
    temp=head;
    do{
        printf("%d -> ",temp->data);
        temp=temp->next;
        count++;
    }while(temp!=head);

    printf("(Back to Head)\nTotal Nodes = %d\n",count);
}