#include "main.h"

/**
*print_diagonal - moneda 4
*@n:la variable prestablecida
*Return:
*/

void print_diagonal(int n)
{
int l, b;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (l = 1; l <= n; l++)
{
for (b = 0; b < l; b++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar('\n');
}
}
}
