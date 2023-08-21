#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a:input integer 1
 * @b:input integer 2
 * description: a function that swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
