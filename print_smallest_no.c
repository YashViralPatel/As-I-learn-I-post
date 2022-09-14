#include<stdio.h>
// Find the smallest of two numbers
int main() {
int a,b;

printf("enter 1st number: ");
scanf("%d", &a);

printf("enter 2nd number: ");
scanf("%d", &b);

if(a>b) {printf("The smallest number is: %d", b);}
else{printf("The smallest number is: %d", a);}

return 0;
}