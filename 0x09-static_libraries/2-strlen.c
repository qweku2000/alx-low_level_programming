#include "main.h"

/**
 * _strlen - A functions that returns the length of a string.
 * @s: The string to get its length.
 *
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')/*the array count != the last count of strings*/
	{
		len++;/*count length from zero*/
	}

	return (len);
}
