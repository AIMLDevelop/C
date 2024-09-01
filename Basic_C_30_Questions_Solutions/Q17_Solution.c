// Write a c program to print the frist even numbers , where the n is given by the user.
#include <stdio.h>

int main(){
    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
         printf("%d\n",i);
        i++;
    }
    return 0;
}