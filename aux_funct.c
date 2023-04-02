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
int n = va_arg(args, int);
int len = 0;
int digits[10];
int i = 0, j;

if (n < 0)
{
_putchar('-');
n = -n;
len++;
}

if (n == 0)
{
_putchar('0');
len++;
}

while (n != 0)
{
digits[i] = n % 10;
n /= 10;
i++;
}

for (j = i - 1; j >= 0; j--)
{
_putchar(digits[j] + '0');
len++;
}

return (len);
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
		binary[i] = (num >> i)&1;

	for (i = 0; i < sizeof(num) * 8; i++)
	{
		prin += _putchar(binary[sizeof(num) * 8 - i - 1] ? '1' : '0');
	}


return (prin);
}
