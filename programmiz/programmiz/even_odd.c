#include <stdio.h>
#include <ctype.h>
// declare a variable to stre number, n
// collect input from the user
// create an if condition that check
//             n%2 == 0 => even
//             n%2 != 0 => add

int even_odd() {
  int n;
  printf("Add a number: ");
  scanf("%d", &n);

  
  if(n==0 || (isdigit(n)) ){
    printf("It not an even or an odd");
    return 0;
  }

  
  if (n % 2 == 0) {
    printf("%d is even", n);
  }else{
    printf("%d is odd", n);
  }
  return 0;
}