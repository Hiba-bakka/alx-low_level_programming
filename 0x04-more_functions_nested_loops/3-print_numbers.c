#include "main.h"

/**
 *  prints number -print 0 - 9
 *  only use _putchar
 *
 * Return: 1 (sucess)
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9' ; num++)
	{
	_putchar(num);

	}

	_putchar('\n');
}
