// Program to maintain student records using linked list.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    int roll;
    char name[50];
    float marks;
    struct student *next;
};

int main(){
    struct student *head=NULL,*temp,*newnode;
    int ch,roll;

    while(1){
        printf("\n1.Insert 2.Display 3.Search 4.Exit: ");
        scanf("%d",&ch);

        if(ch==4) break;

        if(ch==1){
            newnode=(struct student*)malloc(sizeof(struct student));
            printf("Enter Roll Name Marks: ");
            scanf("%d%s%f",&newnode->roll,newnode->name,&newnode->marks);
            newnode->next=head;
            head=newnode;
        }
        else if(ch==2){
            temp=head;
            while(temp){
                printf("%d %s %.2f\n",temp->roll,temp->name,temp->marks);
                temp=temp->next;
            }
        }
        else if(ch==3){
            printf("Enter roll to search: ");
            scanf("%d",&roll);
            temp=head;
            while(temp && temp->roll!=roll) temp=temp->next;
            if(temp) printf("Found: %s %.2f",temp->name,temp->marks);
            else printf("Not Found");
        }
    }
}