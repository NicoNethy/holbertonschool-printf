#include "main.h"

/**
 * printChar - Prints a char
 * @args: the character
 * Return: indeed
 */

int printChar(va_list args)
{
	return (_putchar(va_arg(args, int)));
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
