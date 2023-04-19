#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - returns sum of 2 numbers
  * @a: first number
  * @b: second number
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns difference of 2 numbers
  * @a: first number
  * @b: second number
  * Return: a and b difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of 2 numbers
  * @a: first number
  * @b: second number
  * Return: a and b product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns division of 2 nnumbers
  * @a: first number
  * @b: second number
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - returns remainder of a annd b division
  * @a: first number
  * @b: seconnd number
  * Return: remainder of a and b division
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
