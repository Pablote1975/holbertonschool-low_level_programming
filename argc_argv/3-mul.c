#include "main.h"
#include <stdlib.h>

/**
* main - print new line
 * @argc:que piden
 * @argv:comando
 * atoi fun library futn convert str digs in integer. part the stdlib.h header
 *Return: num
 */

int main(int argc, char *argv[])
{
int num1;
int num2;
int res;

if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
res = num1 *num2;

printf("%d\n", res);
return (0);
}
