<<<<<<< HEAD
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: Size of the array
 * @cmp: function used to compare values
 * Return: Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
=======
nclude "function_pointers.h"

/**
 *  * int_index - a function that searches for an integer
 *   * @array: array
 *    * @size: Size of the array
 *     * @cmp: function used to compare values
 *      * Return: Success
 *       */

int int_index(int *array, int size, int (*cmp)(int))
{
		int i = 0;

			if (size > 0)
					{
								if (array != NULL && cmp != NULL)
											{
															while (i < size)
																			{
																								if (cmp(array[i]))
																														return (i);

																												i++;
																															}
																	}
									}

				return (-1);
>>>>>>> 33f74dd9be8440b9109748a2bf21a43e1925e201
}
