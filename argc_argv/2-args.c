#include "main.h"
#include <stdio.h>

/**
* main - print and new line
 * @argc: lo que piden
 * @argv: nombre del comando
 * Return: numbers
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
  printf("%s\n", argv[i]);
}
return (0);
}
