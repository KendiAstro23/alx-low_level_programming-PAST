#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @a: The input value
 * @b: The input value
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of two numbers.
 * @a: input value
 * @b: input value
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - computes the product of two numbers.
 * @a: input value
 * @b: input value
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Computes the division of two numbers.
 * @a: input value
 * @b: input value
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - displays the remainder of the division of two numbers.
 * @a: input value
 * @b: input value
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

