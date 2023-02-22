#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an interger
 * @i: input number is an integer
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
