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
       _putchar(lc);
       
     }
    printf("\n");
   
  }
  _putchar('\n');
  
  return (0);   
}  
