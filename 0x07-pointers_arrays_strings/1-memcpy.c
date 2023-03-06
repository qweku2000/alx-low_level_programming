#include "main.h"
/*
 * *_memcpy function copies n bytes from memory area src to memory area dest
 *@dest : stores copy of byte from src 
 *@src : contains original byte that is copied to ponter dest
*/



char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int a;

  for (a = 0 ; a<n; a++ )
    {
        dest[a] = src[n];
    }
  return (dest*);
}
