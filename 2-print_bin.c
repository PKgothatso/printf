#include "main.h"
/**
 * print_bin - binary to be printed
 * @val: argument
 * Return: value of integer
 */

int print_bin(va_list val)
{
	unsigned int j;
	unsigned int number = va_arg(val, unsigned int);
	int count = 0;
	int flag = 0;
	int i, a = 1, b;

	for (i = 0; i < 32; i++)
	{
		j = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = j >> (31 - i);
			_putchar(b + 48);
			count++;
		}
		if (count == 0)
		{
			count++;
			_putchar ('0');
		}
		return (count);
}
