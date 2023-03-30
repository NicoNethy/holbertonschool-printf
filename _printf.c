#include "main.h"

/**
 * _printf - Our printf
 * @format: format
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, c = 0;
	va_list ptr;
	int (*f)(va_list) = NULL;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(ptr, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = get_op_func(format[++i]);

			if (f)
				c += (*f)(ptr);
			else
			{
				c += (_putchar('%') + _putchar(format[i]));
			}
		}
		else
			c += _putchar(format[i]);
	}
	va_end(ptr);
return (c);
}
