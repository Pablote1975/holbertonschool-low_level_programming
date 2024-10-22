#include <unistd.h>
#include <stdio.h>
/**
 *main - Moneda 3 de C T3
 *Return: 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
