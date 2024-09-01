/* Write a program to accept a number N as input from the user and print the following pattern. 
Sample N=5
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main(){

    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("*****\n");
    }    
    return 0;

}