#include<stdio.h>
//This programme is to convert a value of centimeters given by user to meters and kilometers
int main() {
float n;
printf("Enter the value n in centimeters to be converted  ");
scanf("%f", &n);

printf("n in meters is %f cms\n",n/100);
printf("n in kilometers is %f kms",n/100000);

return 0;
}