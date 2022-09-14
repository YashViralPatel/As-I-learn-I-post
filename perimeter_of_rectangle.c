#include<stdio.h>
// programme to calculate the perimeter of a rectangle when the sides a and b are to be given by the user.
int main() {
float a,b;

printf("enter length of side a in centimeters  ");
scanf("%f", &a);

printf("enter length of side b in centimeters  ");
scanf("%f", &b);

printf("Perimeter of the rectangle is %f", 2 * (a + b));

return 0;
}