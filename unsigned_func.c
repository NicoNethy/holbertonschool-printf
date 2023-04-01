#include "main.h"
#include <stdarg.h>

/**
* printUNS - prints an unsigned integer
* @args: arguments
* Return: the number of characters printed
*/
int printUNS(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int div = 1;
	int len = 0;

	while (num / div > 9)
	div *= 10;

while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

return (len);
}
