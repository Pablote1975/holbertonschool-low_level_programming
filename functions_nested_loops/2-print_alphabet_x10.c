#include "main.h"

/**
*print_alphabet_x10 - Moneda 3 de C T1
 *Return: 0
*/

void print_alphabet_x10(void)
{
char alphabet;
int i = 0;
for (; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}}