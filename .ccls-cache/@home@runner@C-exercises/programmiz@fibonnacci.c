// C Program to Display Fibonacci Sequence
#include <stdio.h>
// ask user the number 
// write main function 
// write a for loop from 0 to user input 
// return 
/*
*/

int main(){
  printf("Enter the number of fb: ");
  int a =0;
  int b = 1;
  scanf("%d",&a);
  for(i=0;i<=20;i++){
    num = (i+1) + (i+(i+1));
    printf("%d, ",num);
  }
  return 0;
}