#include "main.h"
#include <stdarg.h>


/**
* printUnsignedDEC - prints an unsigned integer in decimal format
* @args: the list of arguments
* Return: the number of characters print
*/
int printUnsignedDEC(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int len = 0;
char buffer[32];
int i;

if (n == 0)
return (_putchar('0'));

	while (n > 0)
	{
		buffer[len++] = (n % 2) + '0';
		n /= 2;
	}

buffer[len] = '\0';

for (i = len - 1; i >= 0; i--)
_putchar(buffer[i]);

	
return (len);
}
