#include<stdio.h>

int main()
{
  int n,i;
  for(i=1;i<=12;i++)
    {
      printf("%d\n",i);
      for(n=1;n<=10;n++)
        {
    printf("%dx%d = %d\n",i,n,n*i);
    
          }
      }
}