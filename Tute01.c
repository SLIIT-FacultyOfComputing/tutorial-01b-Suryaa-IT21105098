/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int n1, n2;
  float avg = 0;
  
printf("Enter Number 1 : ");
scanf("%d", &n1);
printf("Enter Number 1 : ");
scanf("%d", &n2);
avg = (float)n1/n2;
printf("Average is : %f", avg);

  return 0;
}

