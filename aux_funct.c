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
	int base = 10;
	int isNegative = (n < 0) ? 1 : 0;

	if (isNegative)
		n = -n;

return (putNum((size_t)n, base, "0123456789") + isNegative);
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
* printBI - Print an unsigned int in binary
* @arg: va_list containing the unsigned int to print
* Return: Number of characters printed 
*/
int printBI(va_list arg)
{
unsigned int num = va_arg(arg, unsigned int);
unsigned int binary[sizeof(num) * 8];
unsigned int i;
unsigned int prin = 0;

	for (i = 0; i < sizeof(num) * 8; i++)
		binary[i] = (num >> i) & 1;

	for (i = sizeof(num) * 8 - 1; i > 0; i--)
	{
		prin += _putchar(binary[i] ? '1' : '0');
	}

return (prin);
}
