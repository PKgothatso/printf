#include "main.h"

/** 
 * printf_string - string to be printed
 * @val: arguments passed
 * Return: length of the string
 */

int printf_string(va_list val)
{
	int i;
	int len;
	char *str;

	str = va_arg(val, char *)
		if (str == NULL)
		{

			str = "(null)";
	                len = _strlen(str);
			for (i = 0; i < len; i++)
				_putchar(str[i]);
			return (len);
		}
		else 
		{
			len = _strlen(str);
			for (i = 0; i < len; i++)
				_putchar(str[i]);
			return (len);
}

