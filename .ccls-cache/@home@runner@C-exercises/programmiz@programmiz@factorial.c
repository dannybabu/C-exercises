// set a variabel and ge a number from the user 
// set a base case
// n <0;
// return 0;
// 
// n * factorian(n-1);

#include<stdio.h>

int factorial(n){
  // base cse 
  if(n==1){
    return 1;
  }
  printf("%d\n",n);
  return n*factorial(n-1);
}

int main(){
  int n;
  int result;
  printf("Add a value: ");
  scanf("%d",&n);
  result = factorial(n);
  printf("The total factorial:%d",result);
  return 0;
}