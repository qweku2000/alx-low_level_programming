#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array from an initialized char
 * @c: charcter that initializes the array
 * @size: size of the array
 *
 * Return: pointer to the location of the char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
