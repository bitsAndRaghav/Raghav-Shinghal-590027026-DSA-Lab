// Program to search an element in a singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main(){
    struct node *head=NULL,*temp,*newnode;
    int n,i,key,pos=1,found=0;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            printf("Element found at position %d",pos);
            found=1; break;
        }
        temp=temp->next; pos++;
    }

    if(!found) printf("Element does not exist");
}