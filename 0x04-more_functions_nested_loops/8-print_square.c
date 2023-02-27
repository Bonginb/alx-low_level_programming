#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of sqaure/number of times
 * Return: empty
 */

void print_sqaure(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_puthcar(35);
			}
			_puthcar('\n');
		}
	}
}
