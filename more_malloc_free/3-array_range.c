#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range- Moneda 19
 *@min: variable
 *@max: variable
 * variable
 *Return: d
 */

int *array_range(int min, int max)
{
int *ar;
unsigned int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

ar = malloc(size *sizeof(int));
if (ar == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
ar[i] = min + i;
}
return (ar);
}
