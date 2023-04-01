# C - printf 

- Writing our own `printf` function, this is a project done under [Low Level Programming holbertonschool-printf](https://github.com/NicoNethy/holbertonschool-printf).

## Resource

- [secrets of printf](https://www.cypress.com/file/54761/download)
- [Implementing printf and scanf in C](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)
- [All About Printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)


## Description

- The function `_printf` writes output to stdout. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of standard library `stdarg`) are converted for output.

- Prototype: `int _printf(const char *format, ...);`

## Return

- Upon success, `_printf` returns the number of characters printed (**excluding the terminating null byte used to end output to strings**). If an output error is encountered, the function returns `-1`.

## Format of the Argument String

- The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (apart from `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
- Conversion specification is introduced by the character `%` and ends with a conversion specifier (which in whole make up the format specifier.)

## General Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- No more than 5 functions per file.
- You are not allowed to use global variables.
- The prototypes of all your functions should be included in your header file called `holberton.h`
- All your header files should be include guarded.

### Authorized functions and macros

- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

### Github

- There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### Compilation

- The code can be compiled like this:
	```sh
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print
	```



## Tasks

0. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life** : A function that produces output according to a format.
	- Prototype: int `_printf(const char *format, ...);`
	- Returns: the number of characters printed (excluding the null byte used to end output to strings)
	- write output to stdout, the standard output stream
	- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
		- `c`
		- `s`
		- `%`
	- You don’t have to reproduce the buffer handling of the C library `printf` function.
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

1. **Education is when you read the fine print. Experience is what you get if you don't** : Handle the following conversion specifiers:
	- `d`
	- `i`
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

2. **Just because it's in print doesn't mean it's the gospel** : Create a man page for your function.
	- How to read the man page: `man ./man_3_printf`


# _printf function

This project contains an implementation of the printf function in C. The _printf function takes a format string and arguments as input and prints formatted output to the console.

### Function Prototype
`int _printf(const char *format, ...);`

# Usage

The _printf function can be used to print various types of data including strings, characters, integers, and decimal numbers. To print a formatted string, you would use the following syntax:
`_printf("format string", argument1, argument2, ...);`

**The format string contains placeholders for the arguments, which are indicated by the % character followed by a conversion specifier. The conversion specifier determines how the argument should be formatted.**

### Conversion Specifiers

- %s: String
- %c: Character
- %d: Signed integer
- %i: Signed integer
- %: Print Sign
- %b: Binary

# FUNCTIONS 

### printChar(va_list args)

`This function takes a single argument of type va_list which contains a character value. The function then calls _putchar() function to print the character and returns the result.`

### printString(va_list args)

`This function takes a single argument of type va_list which contains a string. The function then calls the putstring() function to print the string and returns the result.`

### printNum(va_list args)

`This function takes a single argument of type va_list which contains an integer value. The function first checks if the integer value is negative, and if so, it prints a "-" sign before the absolute value of the number. The function then calls putNum() function to print the integer and returns the result.`

### printSign(va_list args)

`This function takes a single argument of type va_list which is unused. The function simply calls _putchar() function to print the "%" character and returns the result.`


### Function `get_op_func`

The function get_op_func receives a single character as argument and returns a pointer to one of the functions in the list of valid operators ops[]. This function is used by _printf to identify which function to call according to the format string.

**Parameters**

s: a character representing the operator

**Return Value**

A pointer to the corresponding function of the operator

**Code Explanation**

The function get_op_func iterates through the list of op_t structs containing valid operators and their corresponding functions. It checks each op value in the struct against the given s character until it finds a match, then returns the corresponding function. If no match is found, it returns NULL.

### puts.c

**The code snippet provided contains three functions: `_putchar`, `putstring`, and `putNum`.**

The `_putchar` function is a simple implementation of the standard library function putchar. It writes a character to the standard output stream using the write system call and returns the number of bytes written. If an error occurs, it returns -1 and sets the errno variable.

The `putstring` function takes a string as an argument and prints it to the standard output stream. If the argument is NULL, it prints the string "(null)". It returns the length of the string that was printed.

The `putNum` function is a recursive function that takes an unsigned long integer, a base, and a string of digits as arguments. It prints the integer in the given base using the specified digits. It works by first recursively dividing the number by the base and calling itself with the quotient, and then printing the remainder using the specified digits. It returns the length of the number that was printed.

These three functions are used in conjunction with the printf function to implement various format specifiers for printing characters, strings, and numbers.

### Authors

- [NicoNethy](https://github.com/NicoNethy)
- [NahuelSilva28](https://github.com/NahuelSilva28)
