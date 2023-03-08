#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion Returns the natural sqaure root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural sqaure root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates the natural square  root
 * @n: number to calculate the sqaure root
 * @1: iterate number
 *
 * Return: the natural sqaure root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
