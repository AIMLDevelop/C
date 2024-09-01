// Write a C program to print all the characters from Z to A once
#include <stdio.h>

int main(){
    char ch;
    for (ch='A';ch<='Z';ch++)
    {
        printf("%c",ch);
    }
    
    return 0;
}