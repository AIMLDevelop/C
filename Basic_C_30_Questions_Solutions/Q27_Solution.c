//Write a program to accept a number as input and check if it is divisible by 3. If it is divisible by 3 print YES else print NO.
#include <stdio.h>

int main(){

    int num,divide;
    printf("Enter the number ");
    scanf("%d",&num);
    divide=num%3;
    if(divide==0){
        printf("This number is Divisible by 3");
    }
    else{
        printf("this number is not divisible by 3");
    }
    return 0;

}