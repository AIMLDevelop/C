// Write a program to accept 2 numbers from the user as input and print their sum.
#include <stdio.h>

int main(){
    int a,b,sum;
    printf("Enter the Frist Number ");
    scanf("%d",&a);
    printf("Enter the Second Number ");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum is %d",sum);
    return 0;
}