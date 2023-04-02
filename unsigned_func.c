#include "main.h"
#include <stdarg.h>

/**
* printUNS - prints an unsigned integer
* @args: arguments
* Return: the number of characters printed
* (u)
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


/**
* printUnsignedOCT - prints an unsigned integer in octal format
* @args: the list of arguments
* Return: the number of characters printed
* (o)
*/
int printUnsignedOCT(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;
	char buffer[32];
	int i;

if (n == 0)
return (_putchar('0'));

	while (n > 0)
	{
		buffer[len++] = (n % 8) + '0';
		n /= 8;
	}
	buffer[len] = '\0';

	reverseSTR(buffer, len);

	for (i = 0; i < len; i++)
	{
		_putchar(buffer[i]);
	}

return (len);
}

/**
* reverseSTR - reverses a string
* @str: the string to revet
* @len: the length of the string
*/
void reverseSTR(char *str, int len)
{
int i, j;
char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
