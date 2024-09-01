// Write a C program to print all the characters from A to Z 3 times.
#include <stdio.h>

int main(){
    char ch;
    for (ch='A';ch<='Z';ch++)
    {
        printf("%c",ch);
        printf("%c",ch);
        printf("%c",ch);
    }
    
    return 0;
}