#include "main.h"

/**
 *_puts- Moneda 13
 *@str:puntero
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
