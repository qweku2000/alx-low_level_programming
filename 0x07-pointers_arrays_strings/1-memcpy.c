#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area @src to memory area @dest
 *
 * @dest: Pointer to copy of byte from @src
 * @src: Pointer to original byte that is copied to pointer @dest
 * @n: Number of bytes to copy from @src to @dest
 *
 * Return: Pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
