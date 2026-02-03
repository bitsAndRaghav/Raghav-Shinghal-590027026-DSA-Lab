//Write a program using structures to read and display the details of a student. The details include name, roll number, fees, and Date of Birth (DOB). DOB is an array of 3 integers (day, month, year).

#include <stdio.h>
struct Student {
    char name[50];
    int roll_number;
    float fees;
    int dob[3]; 
};

void main() {
    struct Student s;
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_number);
    printf("Enter Fees: ");
    scanf("%f", &s.fees);
    printf("Enter Date of Birth (Day, Month, Year): ");
    scanf("%d %d %d", &s.dob[0], &s.dob[1], &s.dob[2]);

    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Fees: %.2f\n", s.fees);
    printf("Date of Birth: %02d/%02d/%04d\n", s.dob[0], s.dob[1], s.dob[2]);
}