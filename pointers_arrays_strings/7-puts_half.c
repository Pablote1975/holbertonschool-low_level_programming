#include "main.h"
/**
 *puts_half- Moneda 13
 *@str:variable
 *Return:lenght
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

void puts_half(char *str)
{
  int i = 0;
  int len = _strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		n++;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
