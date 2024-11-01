#include "main.h"

/**
*print_triangle- moneda 4
*@size:la variable prestablecida
*Return:0
*/

void print_triangle(int size)
{
int i, k, esp;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (esp = 0; esp < size - i; esp++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
