#include "function_pointers.h"

/**
 *array_iterator -M21
 *@array: variable
 * @size: variable
 * @action: variable
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
