// Program to create a list and reverse node data without changing links.

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
    struct node *head=NULL,*temp,*newnode;
    int n,i;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }

    printf("\nOriginal List:\n");
    display(head);

    temp=head;
    for(i=0;i<n;i++){ arr[i]=temp->data; temp=temp->next; }

    temp=head;
    for(i=n-1;i>=0;i--){ temp->data=arr[i]; temp=temp->next; }

    printf("\nList After Reversing Data:\n");
    display(head);
}