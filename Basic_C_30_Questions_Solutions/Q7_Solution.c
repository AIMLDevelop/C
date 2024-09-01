// Write a program to accept 2 numbers from the user as input and print their product.
#include <stdio.h>

int main(){
    int a,b,multiply;
    printf("Enter the Frist Number ");
    scanf("%d",&a);
    printf("Enter the Second Number ");
    scanf("%d",&b);
    multiply=a*b;
    printf("The sum is %d",multiply);
    return 0;
}