#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer -a swaps with b
 * @b: second integer -b swaps with a
 */

void swap_int(int *a, int *b)
{
	int see;/*used as see storage space and empty*/

	see = *a;
	/*a value is put into see storage*/
	*a = *b;
	/*b value is put into empty a storage*/
	*b = see;
	/*a value now in see is then put into empty b*/
}
