#include "main.h"

/**
 *print_line - moneda 4
 *@n:la variable prestablecida
 *Return:
 */

void print_line(int n)
{
int l;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (l = 1; l <= n; l++)
_putchar ('_');
_putchar ('\n');
}
}
