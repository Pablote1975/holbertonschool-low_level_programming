#include <stdio.h>
/**
 **main - Moneda 2 de C T9
 *Return: 0
 */

int main(void)
{
int hx;

for (hx = 0; hx < 10; hx++)
{
putchar(hx + '0');
if (hx < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
