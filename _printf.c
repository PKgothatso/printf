#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function.
 * @format: Format string containing conversion specifiers.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += putchar(va_arg(args, int));
					break;
				case 's':
					count += printf("%s", va_arg(args, char *));
					break;
				case '%':
					count += putchar('%');
					break;
				default:
					count += putchar('%');
					count += putchar(*format);
					break;
			}
		}
		else
		{
			count += putchar(*format);
		}
		format++;
	}

	va_end(args);
	return count;
}

int main(void)
{
	_printf("This is a simple %c example with a %s and a%%!\n", 'C', "string");
	return (0);
}
