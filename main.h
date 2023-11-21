#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _strlen(char *str);
int print_37(void);
int print_d(va_list args);
int print_bin(va_list val);
int print_i(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(const char *str);

=======
#include <unistd.h>

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
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
>>>>>>> 93ffc6ee29c33cb3945b9a3044c559529aee6e42
int _printf(const char *format, ...);

#endif
