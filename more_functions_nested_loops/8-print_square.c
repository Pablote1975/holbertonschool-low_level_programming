#include "main.h"

/**
*print_square - moneda 4
*@size:la variable prestablecida
*Return:
*/

void print_square(int size)
{
int l, b;
if (size <= 0)
{
_putchar ('\n');
}
else
{
for (l = 0; l < size; l++)
{
for (b = 0; b < size; b++)
{
_putchar ('#');
}
_putchar('\n');
}
}
}
