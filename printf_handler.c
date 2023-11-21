#include "main.h"

/**
 * _printf - Custom printf function that selects the correct function to print.
 * @format: Format string containing specifiers.
 *
 * Return: The total number of characters printed.
 */
int _printf(const char * const format, ...)
{
	/* Array of specifier-function pairs */
	convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;
	int flag_plus, flag_space, flag_hash;

	va_start(args, format);

	/* Check for invalid format or empty format string */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(args);
		return (-1);
	}

	while (format[i] != '\0')
	{
		/* Initialize flags for each iteration */
		flag_plus = 0;
		flag_space = 0;
		flag_hash = 0;

		/* Check for flags */
		while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
		{
			if (format[i] == '+')
				flag_plus = 1;
			else if (format[i] == ' ')
				flag_space = 1;
			else if (format[i] == '#')
				flag_hash = 1;
			i++;
		}

		j = 13;
		while (j >= 0)
		{
			/* Check if the current format matches a specifier */
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				/* Pass flags to the print function */
				length += p[j].function(args, flag_plus, flag_space, flag_hash);
				i = i + 2;
				goto Here;
			}
			j--;
		}

		_putchar(format[i]);
		length++;
		i++;
	}

Here:
	va_end(args);
	return (length);
}
