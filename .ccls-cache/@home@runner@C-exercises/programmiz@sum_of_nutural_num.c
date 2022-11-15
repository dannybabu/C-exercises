#include <stdio.h>

int main(){
  int sum =0;
  int a[10];
  int i;
  // int j;

  for(i=0;i<=10;i++){
    printf("add %dth number to get sum: ",i);
    //printf("%d",a[i]);
    scanf("%d",&a[i]);
    
  }
  
  for(i=0;i<=10;i++){
    if(a[i]>0){
      sum = sum+a[i];
    }
  }
  
  printf("The sum is : %d",sum);
  return 0;
}