#include "main.h"

/**
 * _memset - fills first n bytes of memory of string with constant byte of b
 * @s: pointer to memory area to be filled
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 * Return: pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
