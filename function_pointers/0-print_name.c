#include "function_pointers.h"

/**
 * print_name - M21
 * @name: variable
 * @f: variable
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
