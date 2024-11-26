#include "3-calc.h"

/**
*op_add- suma
 *@a: a variable
 *@b: b variable
 *Return: a + b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub- resta
 *@a: variable a
 *@b: variable b
 *Return: a - b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul- multiplicar
 *@a: variable a
 *@b: variable b
 *Return: a * b
 */


int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: variable a
 * @b: variable b
 * Return: result
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
 *op_mod- funcion que devuelve el modulo (el resto)
 *@a: numero a a modular
 *@b: numero b a modular
 *Return: a % b
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

