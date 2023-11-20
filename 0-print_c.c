#include "main.h"

/**
 * printf_char - char to be printed
 * @val: arguments to be passed
 * Return: 1.
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
