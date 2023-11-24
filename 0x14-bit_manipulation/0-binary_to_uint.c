#include "main.h"




/**
 *binary_to_uint -  a function that converts a binary number to an unsigned int
 * @b - pointer to a string of 0 and 1 chars
 */

unsigned int binary_to_uint(const char *b)
{
  int len;
  int num = 0;
  if (!b)
    return (0);

  for (len = 0;b[len] != '\0'; len++)
    {
      if (b[len]!= '0' &&  b[len] != '1')
	return (0);
    }
  
  for  (len = 0; b[len] != '\0'; len++)
    {
      num <<= 1;
      if (b[len] == '1')
	num += 1;
    }
  return (num);
  
  
}
