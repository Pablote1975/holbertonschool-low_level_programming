#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - print and new line
 * @argc: lo que piden
 * @argv: nombre del comando
 * Return: numbers
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0';)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
