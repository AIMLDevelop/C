// Write a program to accept two characters as input and check if they are equal.
#include <stdio.h>

int main(){
    char a,b;
    printf("Enter two number ");
    scanf("%c %c",&a, &b);
    if(a==b){
        printf("Yes Both are equal");
    }
    else{
        printf("No Both are Not Same");
    }
    return 0;
}