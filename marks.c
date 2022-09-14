#include<stdio.h>

int main() {
int rollnumber, A, B, C, D, E;

printf("Enter candidate roll number: ");
scanf("%d", &rollnumber);

printf("Enter marks in Subject A: ");
scanf("%d", &A);

printf("Enter marks in Subject B: ");
scanf("%d", &B);

printf("Enter marks in Subject C: ");
scanf("%d", &C);

printf("Enter marks in Subject D: ");
scanf("%d", &D);

printf("Enter marks in Subject E: ");
scanf("%d", &E);

int Total= (A+B+C+D+E)/5;

if (Total>90)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: A+\n");
}
else if(Total<90 && Total>80)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: A\n");
}
else if(Total<80 && Total>70)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: B+\n");
}
else if(Total<70 && Total>60)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: B\n");
}
else if(Total<60 && Total>50)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: C+\n");
}
else if(Total<50 && Total>40)
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: C\n");
}
else
{
   printf("-------------------\n");
   printf("Total Marks: %d /500\n", Total*5);
   printf("Total percentage: %d percent\n", Total);
   printf("Grade: Not Applicable.\n");
}

if(A>40 && B>40 && C>40 && D>40 && E>40) {
    printf("Congratulations, you have been promoted to the next grade.");
}
else{printf("You have to repeat the grade.");}

return 0;
}