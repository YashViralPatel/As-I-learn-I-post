#include<stdio.h>
#include<math.h>

int main() {
float a,b;
printf("Enter value of a  ");
scanf("%f", &a);

printf("Enter value of b  ");
scanf("%f", &b);

float c= pow(a,b);

printf("a^b= %f", c);

return 0;

}