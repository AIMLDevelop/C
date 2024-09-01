// Write a program to accept two numbers as input and print the greater of the 2 numbers.
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }
    return 0;
}