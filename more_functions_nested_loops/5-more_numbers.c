#include "main.h"

/**
 *more_numbers - Moneda 4
 *
 *Return:i
 */

void more_numbers(void)
{
int  i, k;
for (i = 1; i <= 10; i++)
{
for (k = 0; k <= 14; k++)
  {
if (k > 9)
  {
  _putchar((k / 10) + '0');
  }
 _putchar((k % 10) + '0');
 }
 _putchar('\n');
 }}

