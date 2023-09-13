#include "function_pointers.h"

/**
 * print name
 * @f: the print function pointer
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name)
}
