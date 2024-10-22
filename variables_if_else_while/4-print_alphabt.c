#include <unistd.h>
#include <stdio.h>
/**
 *main - Moneda 3 de C T4
 *Return: 0
 */
int main(void)
{
for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
}
putchar('\n');

return (0);
}
