#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: value to be computed
 * Return:absolute value or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
