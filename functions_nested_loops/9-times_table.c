#include "main.h"

/**
 *times_table- Moneda 3 de C
 *n umero mr multiplicador rs resultado
 *Return: una tabla multiplicadora
 */


void times_table(void)
{
int n, mr, rs;

for (mr = 0; mr < 10; mr++)
{
for (n = 0; n < 10; n++)
{
rs = n * mr;
if (n * mr >= 10)
{
_putchar('0' + (rs / 10));
_putchar('0' + (rs % 10));
if (n == 9)
{ break; }
_putchar(',');
_putchar(' ');
}
else
{
if (n != 0)
{
_putchar(' ');
}
_putchar('0' + (n * mr));
if (n == 9)
{ break;
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
