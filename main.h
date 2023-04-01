#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
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
int putNum(unsigned long int n, int base, char *digits);
int printBI(va_list arg);

/* Unsigned */
int printUnsignedDEC(va_list args);
#endif
