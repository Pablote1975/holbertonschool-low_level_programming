#include "main.h"
/**
*print_last_digit- Moneda 3 de C
* @n: Variable desconocida
*Return: 0
*/
int print_last_digit(int);
{
  int n, ld;
  
  ld = n % 10;
  if (ld < 0)
    ld * -1;

  _putchar(ld + '0');
