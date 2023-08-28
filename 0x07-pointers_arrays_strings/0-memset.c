#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: string to work with
 * @b: character to rplace with
 * @n: number of character to be replaced
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int i;
	
	for (i=0; i > 0 ; i--)
	{
		s[i] = b;
	}
	return(s);
}
