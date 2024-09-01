// Write a C program to print the first N natural numbers, where N is given as input by the user.
#include <stdio.h>

int main(){
    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for (i= 1;i<=num;i++)
    {   
        printf("%d",i);
    }   
    return 0;
}