/*
Write a C program using structure and dynamic memory allocation
to sort student records based on marks.
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[30];
    float marks;
    float percent;
    char grade;
};

void main() {
    int n,i,j;
    struct student *s,temp;

    printf("Enter number of students: ");
    scanf("%d",&n);

    s = (struct student*) malloc(n * sizeof(struct student));

    if(s == NULL) {
        printf("Memory allocation failed");
        return;
    }

    for(i=0;i<n;i++) {
        printf("\nStudent %d\n", i+1);

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        s[i].percent = s[i].marks;

        if(s[i].percent >= 90)
            s[i].grade = 'A';
        else if(s[i].percent >= 75)
            s[i].grade = 'B';
        else if(s[i].percent >= 60)
            s[i].grade = 'C';
        else
            s[i].grade = 'D';
    }

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(s[i].marks > s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }

    printf("Roll No  Name       Marks   Percentage   Grade\n");

    for(i=0;i<n;i++)
        printf("%-8d %-10s %-7.2f %-12.2f %c\n",
               s[i].roll,
               s[i].name,
               s[i].marks,
               s[i].percent,
               s[i].grade);

    free(s);
}