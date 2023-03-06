#include "main.h"

/*
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

    /* Loop through each character in the string */
    for (a = 0; s[a] != '\0'; a++)
    {
        /* If the current character matches the search character */
        if (s[a] == c)
        {
            /* Return a pointer to the current character */
            return (&s[a]);
        }
    }

    /* If the search character is the null terminator */
    if (c == '\0')
    {
        /* Return a pointer to the end of the string */
        return (&s[a]);
    }

    /* If the search character was not found */
    return (NULL);
}
