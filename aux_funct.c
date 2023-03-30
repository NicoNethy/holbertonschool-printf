#include "main.h"

/**
 * printChar - Prints a char
 * @args: the character
 * Return: indeed
 */

int printChar(va_list args)
{
	char *str = va_arg(args, char *);
	(void) mode;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}

	write(1, str, strlen(str));

	return (strlen(str));
}

/**
 * printString - prints a string
 * @args: the string that gets copied
 * Return: allways
 */

int printString(va_list args)
{
		return (putstring(va_arg(args, char *)));
}

/**
 * printNum - the functiont that prints an int
 * @args: the int that gets print
 * Return: returns
 */

int printNum(va_list args)
{
	long int n = va_arg(args, int);
	int isNegative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
		isNegative = 1;
	}

	return (putNum(n, 10, "0123456789") + isNegative);
}

/**
 * printSign - Prints the % sing
 * @args: the character in question
 * Return: allways yes
 */

int printSign(__attribute__((unused)) va_list args)
{
		return (_putchar('%'));
}

/**
 * putcharFunc - prints a character
 * @args: va_list containing a character
 * @mode: unused
 *
 * Return: number of characters printed
 */
int putcharFunc(va_list args, int mode)
{
	char c = va_arg(args, int);
	(void) mode;

	write(1, &c, 1);

	return (1);
}
/**
 * printInt - prints an integer
 * @args: va_list containing an integer
 * @base: base to use for conversion
 *
 * Return: number of characters printed
 */
int printInt(va_list args, int base)
{
	char *buffer;
	long int n = va_arg(args, long int);
	int i = 0, len, negative = 0;

	if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	buffer = malloc(32);
	if (!buffer)
		return (0);

	if (n != 0)
	{
		while (n > 0)
		{
			if (base <= 10)
				buffer[i++] = ((n % base) + '0');
			else if (base == 16)
			{
				if ((n % base) >= 10)
					buffer[i++] = ((n % base) + 87);
				else
					buffer[i++] = ((n % base) + '0');
			}
			n = n / base;
		}
		if (negative && base == 10)
			buffer[i++] = '-';
		for (int j = i - 1; j >= 0; j--)
			write(1, &buffer[j], 1);
	}
	else
	{
		buffer[i++] = '0';
		write(1, &buffer[i - 1], 1);
	}

	len = strlen(buffer);
	free(buffer);

return (len);
}
