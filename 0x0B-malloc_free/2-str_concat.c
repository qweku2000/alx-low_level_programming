#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: a pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
        char *p;
        unsigned int i;

        p = malloc(strlen(s1) + strlen(s2) + 1);

        if (p == NULL)
        {
                return (NULL);
        }
        else
        {
                for (i = 0; i < strlen(s1) + strlen(s2); i++)
                {
                        if (i < strlen(s1))
                        {
                                p[i] = s1[i];
                        }
                        else if (i >= strlen(s2))
                        {
                                p[i] = s2[i - strlen(s1)];
                        }
                }
        }

        return (p);
}
