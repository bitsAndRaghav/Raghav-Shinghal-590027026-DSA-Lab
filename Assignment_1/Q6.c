/* Write a C program using array of structures with 
dynamic memory allocation to store employee details 
and find the employee with the highest salary.
*/
#include <stdio.h>
#include <stdlib.h>

struct emp {
    int id;
    char name[30];
    float sal;
};

void main() {
    int n,i,maxi=0;
    struct emp *e;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    e = (struct emp*) malloc(n * sizeof(struct emp));

    if(e == NULL) {
        printf("Memory allocation failed");
        return;
    }

    for(i=0;i<n;i++) {
        printf("Enter employee id %d: ", i+1);
        scanf("%d",&e[i].id);
        printf("Enter employee name %d: ", i+1);
        scanf("%s",e[i].name);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f",&e[i].sal);

        if(e[i].sal > e[maxi].sal)
            maxi = i;
    }

    printf("\nEmployee with highest salary:\n");
    printf("%d %s %.2f", e[maxi].id, e[maxi].name, e[maxi].sal);

    free(e);
}