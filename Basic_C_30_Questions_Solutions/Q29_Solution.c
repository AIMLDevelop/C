// Write a program to accept a number as input and check if it is positive, negative or zero.
#include <stdio.h>

int main(){

    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    if(num<0){
        printf("The number is Negative");
    }
    else if (num>0){
        printf("The number is Positive");
    }
    else{
        printf("The number is Zero");
    }
    return 0;

}