#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...);	
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char);
int printInt(int b);
int printChar(int b);
int printFloat(double b);
int printString(char *b);

#endif
