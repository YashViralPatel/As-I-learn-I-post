#include<stdio.h>
//This Program is to find the average of three numbers.
int main() {
int x,y,z;
printf("enter first number:  ");
scanf("%d", &x);

printf("enter second number:  ");
scanf("%d", &y);

printf("enter third number:  ");
scanf("%d", &z);

printf("The average of the three numbers is %d", (x+y+z)/3);

return 0;
}
