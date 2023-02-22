#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 *
 * @c: The character in ASCII code
 * Return: 1 for  lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
