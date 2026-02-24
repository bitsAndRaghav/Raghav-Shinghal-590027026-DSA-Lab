// Program to represent polynomial using linked list.

#include <stdio.h>
#include <stdlib.h>

struct poly{ int coeff,exp; struct poly *next; };

int main(){
    struct poly *head=NULL,*temp,*newnode;
    int n,i,x,sum=0;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        newnode=(struct poly*)malloc(sizeof(struct poly));
        printf("Enter coefficient and exponent: ");
        scanf("%d%d",&newnode->coeff,&newnode->exp);
        newnode->next=head;
        head=newnode;
    }

    printf("Enter x value: ");
    scanf("%d",&x);

    temp=head;
    while(temp){
        int term=1,j;
        for(j=0;j<temp->exp;j++) term*=x;
        sum+=temp->coeff*term;
        temp=temp->next;
    }

    printf("Polynomial value = %d",sum);
}