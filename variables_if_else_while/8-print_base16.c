#include <stdio.h>
/**
 **main - Moneda 2 de C T8
 *Return: 0
 */

int main(void)
{
int hx;

for (hx = 0; hx < 16; hx++)
{
if (hx < 10)
{
putchar(hx + '0');
}
else
{
putchar(hx - 10 + 'a');
}
}
putchar('\n');

return (0);
}
