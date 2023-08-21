#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str:string
 * description:a function that prints a string
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str); 
			    
	            str++; 
	}
	_putchar('\n');
}
