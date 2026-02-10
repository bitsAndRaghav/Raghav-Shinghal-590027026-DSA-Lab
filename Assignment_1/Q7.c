/*
Write a menu-driven C program using structure and dynamic memory allocation
to add, display, delete records and free memory before exit.
*/

#include <stdio.h>
#include <stdlib.h>

struct rec {
    int id;
    char name[30];
};

void main() {
    struct rec *r = NULL;
    int ch,n=0,i,pos;

    while(1) {
        printf("\n1.Add  2.Display  3.Delete  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        if(ch==1) {
            n++;
            r = (struct rec*) realloc(r, n * sizeof(struct rec));
            printf("Enter id: ");
            scanf("%d",&r[n-1].id);
            printf("Enter name: ");
            scanf("%s",r[n-1].name);
        }
        else if(ch==2) {
            if(n==0)
                printf("No records\n");
            else
                for(i=0;i<n;i++)
                    printf("%d %s\n", r[i].id, r[i].name);
        }
        else if(ch==3) {
            if(n==0) {
                printf("No records to delete\n");
            } else {
                printf("Enter position to delete: ");
                scanf("%d",&pos);
                for(i=pos-1;i<n-1;i++)
                    r[i]=r[i+1];
                n--;
                r = (struct rec*) realloc(r, n * sizeof(struct rec));
            }
        }
        else if(ch==4) {
            free(r);
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }
}