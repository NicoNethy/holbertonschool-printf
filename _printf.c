#include "main.h"

/*/
 *
 *
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

	va_start(list, format);
	while (format && format[i])
	{
		a = 0;
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				a = printInt(c);
				break;
			case 'i':
				l = va_arg(list, int);
				a = printChar(l);
				break;
			case 'f':
				f = va_arg(list, double);
				a = printFloat(f);
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				a = printString(s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && a == 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
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
