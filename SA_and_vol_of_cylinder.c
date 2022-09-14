#include<stdio.h>
//This programme is to calculate the surface area and Volume of a cylinder when the radius and height of the cylinder are given. Pi is 3.147.

int main() {
float r, h;
printf("Enter the radius of the Cylinder  ");
scanf("%f", &r);

printf("Enter the Height of the Cylinder  ");
scanf("%f", &h);

float SA= ((2*3.147*r*h) + (2*3.147*r*r));
float V= 3.147*r*r*h;

printf("The surface area of the cylinder is %f square cm\n",SA);
printf("The Volume of the cylinder is %f cubic cm\n",V);

return 0;
}