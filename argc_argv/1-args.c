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
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
