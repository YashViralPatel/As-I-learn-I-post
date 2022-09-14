#include<stdio.h>
#include<math.h>
// This programme is to calculate the area of a triangle using Heron's formula when the value of the sides of a triangle are given by the user.
int main() {
float a,b,c;
printf("enter value of side a  ");
scanf("%f", &a);

printf("enter value of side b  ");
scanf("%f", &b);

printf("enter value of side c  ");
scanf("%f", &c);

//s stands for semi-perimeter which is a+b+c/2
float s= ((a +b +c)/2);
float x=sqrt(s * (s-a) * (s-b) * (s-c));

printf("The area of the triangle is %f",x);

return 0;
}