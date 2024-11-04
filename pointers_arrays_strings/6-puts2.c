#include "main.h"

/**
 *puts2- Moneda 13
 *@str:variable
 *Return:
*/

void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
