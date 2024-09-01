// Write a program to accept a number as input from the user which denotes the radius and print the area of the circle.
#include <stdio.h>

int main(){
    float r,a;
    printf("Enter the radius ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("The area of circlr is %f",a);
    return 0;
}