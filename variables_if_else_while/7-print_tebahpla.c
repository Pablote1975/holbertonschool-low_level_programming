#include <unistd.h>
#include <stdio.h>
/**
 *main - Moneda 2 de C T7
 *Return: 0
 */

int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');

return (0);
}
