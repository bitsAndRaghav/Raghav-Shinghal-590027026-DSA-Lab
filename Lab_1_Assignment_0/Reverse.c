//Reverse a number.

#include<stdio.h>

int main(){
    int N, rev=0, dig;

    printf("Enter a number: ");
    scanf("%d", &N);

    while(N>0)
    {
        dig=N%10;
        rev=(rev*10)+dig;
        N=N/10;
    }

    printf("Reverse of the given number is: %d", rev);
    return 0;
}