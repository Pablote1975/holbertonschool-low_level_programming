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
int i = 0;
int num;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
