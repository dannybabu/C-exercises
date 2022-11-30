#include <stdio.h>

int main(){
  // loop through the charcter from a-z;
  printf("Inter a char: ");
  char a;
  char c;
  scanf("%c",&a);
  for(c='a';c<='z';c++){
    if(c==a){
      printf("It is an alpabetic");
      return 0;
    }
  }
  printf("not an alphabetic");
  return 0;
}