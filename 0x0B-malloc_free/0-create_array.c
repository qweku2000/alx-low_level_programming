#include <stdio.h>
#include <stdlib.h>

/**
 *@c:charcter that initializes the array
 *@size:size of the array
 *@p:pointer that points to the location of the char
 * *create_array is a function that assigns creates an array from an initialized char
*/

char *create_array(unsigned int size, char c)
{
  char *p = (char*) malloc(size * sizeof(char));

  if ( p == NULL )
    {
      return (NULL);
    }
  else if ( size == 0)
    {
      return (NULL)
    }
  else
    {
      for ( unsigned int i = 0 ; i < size ; size++ )
	{
          p[i] = c ;
	}
      return (p);
    }
}
