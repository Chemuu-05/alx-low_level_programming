#include "main.h"
#include <stdio.h>

int _sqrt(int n, int p);

/**
 *  _sqrt_recursion -  returns the natural square root of a number.
 *  @n: number to claculate natural square root
 *  Return:the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @p: iterate number
  * Return: the natural square root
  */
int _sqrt(int n, int p)
{
	int sqrt = p * p;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (p);

	return (_sqrt(n, p + 1));
}
