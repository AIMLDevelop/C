//Write a C program to print all the characters from a to z once.
#include <stdio.h>

int main(){

    char ch;
    for (ch='a';ch<='z'; ch++)
    {
        printf("%c",ch);
    }
    return 0;
}