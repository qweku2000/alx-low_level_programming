#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string that contains the @accept substring
 * @accept: substring to checked
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0, bytes = 0;

    for (unsigned int a = 0; s[a] != '\0'; a++)
    {
        for (unsigned int b = 0; accept[b] != '\0'; b++)
        {
            if (accept[b] == s[a])
            {
                bytes++;
                count = 1;
            }
        }
        if (count == 0)
        {
            return (bytes);
        }
    }
    return (0);
}
