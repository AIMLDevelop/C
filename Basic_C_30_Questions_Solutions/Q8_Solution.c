// Write a program to accept a number as input from the user which denotes the temperature c to f.
#include <stdio.h>

int main(){
    float c,f;
    printf("Enter the celcious ");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("The farenheight is %f",f);
    return 0;
}