/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1,marks2;//Declare variables for Marks
  float avg;//Declare variables for Average

  printf("Enter the subject 1 marks:");
  scanf("%d",&marks1);

  printf("Enter the subject 2 marks:");
  scanf("%d",&marks2);

  avg = (marks1 + marks2)/ 2.00;

  printf("The average of the marks are %.2f\n",avg);
  
  return 0;
}

