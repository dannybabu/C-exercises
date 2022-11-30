#include <stdio.h>
int main() {

  // declare variable
  // get input from user
  //
  int year;

  printf("enter a year: ");
  scanf("%i", &year);

  if (year % 4 == 0) 
  {
  printf("It's a leap year");
  }
  else {
  printf("The year is not a leap ");
  }

  return 0;
}