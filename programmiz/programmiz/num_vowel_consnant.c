#include <stdio.h>
// check vowelLowecase & vowel uppercase
// if condition 
//      char is a vowel/consnt


int num_vowel_consnant(){
  
  char c;
  printf("add a character: ");
  scanf("%c",&c);
  int lowerChar = (c=='a' || c=='o' || c=='i' ||c=='u' || c=='e');
  int upperChar = (c=='A' || c=='O' || c=='I' ||c=='U' || c=='E');
  if(lowerChar || upperChar){
    printf("%c is a vowel",c);
    }else{
    printf("%c is a consnant",c);
    }
  return 0;
}