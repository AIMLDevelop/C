// Write a program to accept 3 numbers as input and print the maximum of the 3.
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    printf("Enter 3rd number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater");
    }
    else if(b>a && b>c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
    return 0;
}