#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
        char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
