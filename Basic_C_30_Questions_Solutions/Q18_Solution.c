// Write a c program to find the first Square root of N natural number , where n is given bu user.
#include <stdio.h>

int main(){

    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("Square of %d is %d\n",i,i*i);
    }
    return 0;
}