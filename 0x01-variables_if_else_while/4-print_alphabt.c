#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q'

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
		putchar(i);
	}
	putchar('\n');
	return (0);
}
