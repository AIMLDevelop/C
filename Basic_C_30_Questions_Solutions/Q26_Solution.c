// Write a program to accept a number as input and print EVEN if it is an even number and ODD if it is an odd number.
#include <stdio.h>

int main(){
    int num,even;
    printf("Enter the number to find that Even Or Odd ");
    scanf("%d",&num);
    even=(num%2);
    if(even==0){
        printf("%d is Even Number",num);
    }
    else{
        printf("%d is Odd Number",num);
    }
    return 0;
}