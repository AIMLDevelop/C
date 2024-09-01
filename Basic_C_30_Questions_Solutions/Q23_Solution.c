// Write a program to accept two numbers as input and print the lesser of the 2 numbers.
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    if(a>b){
        printf("b is less");
    }
    else{
        printf("a is less");
    }
    return 0;
}