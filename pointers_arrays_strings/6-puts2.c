#include "main.h"

/**
 *puts2- Moneda 13
 *@str:variable
 *Return:
*/

void puts2(char *str)
{
while (*str != '\0')
  { if (*str % 2 == 0)
    _putchar(*str);
    str++;
}
_putchar('\n');
}
