#include "main.h"
#include <stdio.h>
/**
* main - prints its number and new line
 * @argc: lo que piden
 * @argv: nombre del comando
 * Return: numbers
 */
int main(int argc, char *argv[])
{
int i;
int j;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
_putchar(argv[i][j]);
}
_putchar('\n');
}
return (0);
}
