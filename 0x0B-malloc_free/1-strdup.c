#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup is a function that returns a pointer which contains a copy af a string as a parameter
 *@str: str parameter that is to be used or copied
 *@new_str : new string whose location is stored by the returned pointer
 *@p : a pointer to the new string
*/


char *_strdup(char *str)
{
  unsigned int i;
  char *new_str = (char *) malloc(strlen(str)+1) ;
  if ( new_str == NULL )
    {
      return (NULL);
    }
  if (str == NULL)
    {
      return (NULL);
    }

  for ( i = 0; i < strlen(str) +1; i++)
    {
      new_str[i] = str [i];
    }
  return (new_str);
}
