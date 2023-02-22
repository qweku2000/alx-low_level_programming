#include "main.h"



int print_last_digit(int n)
{
	int num;

	if (num%10 < 0)
		num%10 *= -1;

	_putchar(num%10 + '0');

	return (last_digit);
}
