#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;
  char lc;
  for(i=0; i<=9;i++)
  {
   for( lc= 'a'; lc<='z'; lc++)
     {
       putchar(lc);
       
     }
    printf("\n");
   
  }
  printf("\n");
  return (0);   
}  
