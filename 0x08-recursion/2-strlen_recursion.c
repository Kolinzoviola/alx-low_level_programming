#include "main.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @s:string measured.
 *
 * Return:length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

