#include "main.h"

/**
 * print_numbers - print 0 - 9
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
