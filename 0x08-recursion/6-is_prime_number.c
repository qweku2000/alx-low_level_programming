#include "main.h"

/**
 * check_prime - checks to see if number is prime
 * @div: checker
 * @num: number to check
 *
 * Return: 1 if prime, else 0
 */
int check_prime(int div, int num)
{
	if (num < 2 || num % div == 0)
		return (0);
	else if (div > num / 2)
		return (1);
	else
		return (check_prime(div + 1, num));
}


/**
 * is_prime_number - checks and states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
