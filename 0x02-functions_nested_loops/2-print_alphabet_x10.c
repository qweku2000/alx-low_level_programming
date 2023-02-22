#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void print_alphabet_x10(void)
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
   putchar('\n');
  
  return (0);   
}  
