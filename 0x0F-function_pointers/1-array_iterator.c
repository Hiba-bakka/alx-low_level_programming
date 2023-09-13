#include "function_pointers.h"


/**
 * array_iterator - a function given as a
 * @array: array to execute func on
 * @size: is the size of the array
 * @action: is a pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *h = &array + size - 1;

	if (array && size && action)
		while (array <= h)
			action(*array++);
}
