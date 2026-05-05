/* Q1: Hash function on SAP ID using last 3 digits */

#include <stdio.h>

int hash(int sap)
{
    return sap % 1000;
}

int main()
{
    int sap;

    printf("Enter SAP ID: ");
    scanf("%d", &sap);

    printf("Family: %d\n", hash(sap) % 10);

    printf("Coded by : Raghav Shinghal");
    return 0;
}