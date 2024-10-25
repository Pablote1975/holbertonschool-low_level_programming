#include "main.h"
/**
*print_last_digit- Moneda 3 de C
* @n: Variable desconocida
*Return: 0
*/
int print_last_digit(int n)

{
int ld;
ld = n % 10;
if (ld < 0)
ld = -ld;
_putchar(ld + '0');
return (ld);
}
