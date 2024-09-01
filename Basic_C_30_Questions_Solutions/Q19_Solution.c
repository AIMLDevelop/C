// Write a C program to print the cubes of the N natural numbers between 1 and N, where N is given as input by the user.
#include <stdio.h>

int main(){

    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("Square of %d is %d\n",i,i*i*i);
    }
    return 0;
}