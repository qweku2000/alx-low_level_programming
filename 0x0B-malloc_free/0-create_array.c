#include <stdio.h>
#include <stdlib.h>


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
