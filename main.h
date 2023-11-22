#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) (void) (x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op.
 *
 * @format: The format
 * @function: The associated function
 */
struct fmt
{
	char fmt;
	int (*fn) (va_list, char[], int, int. int, int);
};

/**
 * struct format - Converter for printf.
 * @ph: Type char pointer of the specifier.
 * @function: Function for the conversion specifier.
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_bin(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
