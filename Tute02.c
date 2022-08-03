/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance;//declare variable for distance
  float amount;//declare variable for amount

  printf("Enter the distance that vehicle has travelled:");
  scanf("%f",&distance);//Taking distance of customer

  if(distance > 30)
  {
    amount = (30 * 50) +((distance - 30) * 40);
  }
  else
  {
    amount = distance * 50;
  }

  printf("Total amount to be paid is rs.%.2f",amount);//Display the amount to be paid

  return 0;
}
