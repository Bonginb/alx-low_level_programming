#include "main.h"

/**
 * Largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */

int Largest_number(int a, int b, int c)

{
	int largest;

	if (a >= b && a >= c)
	{
	Largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (Largest);
}
