#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns string length
 * @s:string
 * 
 * Return: Always 0
 */

int _strlen(char *s)
{
	int count;
	for (count=0; *s !='\0'; s++){
                  ++count;
		return (count); }
}
