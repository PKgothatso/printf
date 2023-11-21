#include "main.h"

/**
 * print_% - prints percent sign
 * Return: integer
 */

int print_%(void)
{
        _putchar(%);
        return (1);
}

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

#include "main.h"

/**
 * _strlen - length of the string is returned
 * @str: pointer that is a string
 * Return: 1
 */
int _strlen(char *str)
{
        int i;

        for (i = 0; str[i] != 0; i++)
                ;
        return (i);
}
/**
 * _strlen - strlen function but used for constant char pointer str
 * @str: pointer that is a character
 * Return: 1
 */
int strlenc(const char *str)
{
        int i;

        for (i = 0; str[i] != 0; i++)
                ;
                return (i);
}
