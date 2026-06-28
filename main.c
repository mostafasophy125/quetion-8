/*
 Write a C program to input a person's age and check whether the person is eligible to vote using if-else.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    puts("Enter num:");
    scanf("%d",&x);
    if(x>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not Eligible to vote");

    }
}
