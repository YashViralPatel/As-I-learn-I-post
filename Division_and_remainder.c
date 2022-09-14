#include<stdio.h>
// Programme to calculate quotient and remainder when two numbers are divided. Only integer values applicable here.
int main() {

int a, b;
printf("Enter Divident  ");
scanf("%d", &a);

printf("Enter Divisor  ");
scanf("%d", &b);

printf("Quotient= %d\n", a/b);
printf("Remainder= %d", a%b);

return 0;
}
