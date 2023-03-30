#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * putstring - Prints a string
 * @str: the string to copy
 * Return: len of string
 */

int putstring(char *str)
{
	int i;

	if (!str)
	{
		return (putstring("(null)"));
	}

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);

	return (i);

}

/**
 * putNum - Prints an integer
 * @n: the number to print
 * @base: base
 * @digits: digit
 * Return: len of number
 */

int putNum(unsigned long int n, int base, char *digits)
{
	int i = 0;

	if (n / base)
		i += putNum(n / base, base, digits);

	i += _putchar(digits[n % base]);

	return (i);
}
