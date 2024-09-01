//Write a program to accept two numbers as input check if they are equal.
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two number ");
    scanf("%d %d",&a, &b);
    if(a==b){
        printf("Yes Both are equal");
    }
    else{
        printf("No Both are Not Same");
    }
    return 0;
}