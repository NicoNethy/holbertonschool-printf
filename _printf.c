#include "main.h"

/**
 * _printf - a custom printf function that supports printing integers, characters,
 *           strings, and floats.
 *
 * @format: A string that specifies the format of the output.
 * It can contain literal characters and format specifiers.
 * A format specifier starts with a '%' character and is followed
 * by one or more conversion characters.
 * The conversion characters indicate what type of argument to expect
 * and how to format it.
 * Supported conversion characters are 'c' (character), 'i' (integer),
 * 's' (string), and 'f' (float).
 *  Any other characters in the format string are printed as is.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int l = 0;
	int a = 0;
	char c = '\0';
	float f = 0.0;
	char *s = NULL;
	int count = 0;

	va_start(list, format);

	/* Loop through the format string */
	while (format && format[i])
	{
		a = 0;

		/* Check for format specifiers */
		if (format[i] == '%')
		{
			/* Handle each conversion character */
			switch (format[i + 1])
			{
				case 'c':
					/* Get the next argument as a character */
					c = va_arg(list, int);
					/* Print the character */
					a = printChar(c);
					break;
				case 'i':
					/* Get the next argument as an integer */
					l = va_arg(list, int);
					/* Print the integer */
					a = printInt(l);
					break;
				case 'f':
					/* Get the next argument as a float */
					f = va_arg(list, double);
					/* Print the float */
					a = printFloat(f);
					break;
				case 's':
					/* Get the next argument as a string */
					s = va_arg(list, char *);
					/* If the string is NULL, print (nil) */
					if (s == NULL)
						s = "(nil)";
					/* Print the string */
					a = printString(s);
					break;
				default:
					/* If the conversion character is not recognized, skip it */
					i++;
					continue;
			}

		/* If there are more format specifiers and the argument was printed successfully, print a comma */
			if (format[i + 2] != '\0' && a == 1)
			{
				printf(", ");
			}

			/* Skip the conversion character */
			i++;
		}
		else
		{
			/* If the current character is not a format specifier, print it as is */
			printf("%c", format[i]);
			count++;
		}

		/* Move on to the next character */
		i++;
	}

	va_end(list);

	/* Return the total number of characters printed */
	return count;
}

/**
 * printChar - Prints a single character to stdout.
 *
 * @c: The character to print.
 *
 * Return: The number of characters printed (always 1).
 */
	int
	printChar(int b)
{
		printf("%c", b);
			return (1);
}
	int
	printInt(int b)
{
		printf("%i", b);
			return (1);
}
	int
	printString(char *b)
{
		printf("%s", b);
			return (1);
}
