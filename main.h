#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - the struncture
 * @op: the operators
 * @f: the funct
 */

typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;


int _printf(const char *format, ...);

int (*get_op_func(char))(va_list);

int printChar(va_list);
int printString(va_list);
int printNum(va_list);
int printSign(va_list);
int _putchar(char c);
int putstring(char *str);
int printInt(va_list args, int base)
int putNum(unsigned long int n, int base, char *digits);
int putcharFunc(va_list args, int mode)
#endif
