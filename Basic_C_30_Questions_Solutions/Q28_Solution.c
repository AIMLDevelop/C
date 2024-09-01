//Write a program to accept a number as input and check if it is divisible by both 3 & 5. If it is divisible print YES else print NO.
#include <stdio.h>

int main(){

    int num,div3,div5;
    printf("Enter the number ");
    scanf("%d",&num);
    div3=num%3;
    div5=num%5;
    if(div3==0 && div5==0){
        printf("This number is Divisible by 3 and 5");
    }
    else{
        printf("this number is not divisible by 3 and 5");
    }
    return 0;

}