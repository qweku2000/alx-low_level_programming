#include "main.h"


/**
 * _strchr - Locates the first occurrence of character @c in string @s
 *
 * @s: Pointer to the string to search
 * @c: Character to search for
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found
 */


char *_strchr(char *s, char c)
{
  unsigned int a;

  for ( a = 0; s[a] != '\0' ; a++ )
    {
      if ( s[a] = c)
	{
	  return (&s[a])

	}
      else
	{
	  return (NULL);
    }
}
