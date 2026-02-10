/* Write a C program using structure and dynamic memory allocation 
to store and display student details such as roll number, name, and marks.
*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[30];
    float marks;
};

void main() {
    int n,i;
    struct student *s;

    printf("Enter number of students: ");
    scanf("%d",&n);

    s = (struct student*) malloc(n * sizeof(struct student));

    if(s == NULL) {
        printf("Memory allocation failed");
        return;
    }

    for(i=0;i<n;i++) {
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d",&s[i].roll);
        printf("Enter name of student %d: ", i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f",&s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i=0;i<n;i++)
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);

    free(s);
}