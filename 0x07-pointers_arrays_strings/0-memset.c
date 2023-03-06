#include "main.h"

/*
 * *_memset - fills first n bytes of memory of string with constant byte of b
 * @s : pointer to memory area to be filles
 * @b : Mumber of bytes to be filled
 * Return value is @s 
*/

char *_memset(char *s, char b, unsigned int n)
{

  unsigned int a;
  
  for ( a = 0; a<n ; a++ )
    {
      s[a] = b ;
    }
  return (s);
}
