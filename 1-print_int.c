#include "main.h"
/**
 * print_dec - decimal to be printed
 * @args: argument to be printed
 * Return: number of charcters printed
 */
int print_dec(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;

	number = n;
	n = n / 10;

	if (last < 0)
	{
		_putchar('_');
		-number = number;
		-n = n;
		-last = last;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
	}
	return (i);
}
#include "main.h"
/**
 * print_int - integer to be printed
 * @args: argument to be printed
 * Return: number of charcaters to be printed
 */
int print_int(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int number, last = n % 10, digit, exp = 1;

	number = n;
	n = n / 10;

	if (last < 0)
	{
		_putchar('_');
		-number = number;
		-n = n;
		-last = last;
		i++;
	}
	if (number >  0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = n;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			exp = exp / 10;
			i++;
		}
		_putchar(last + '0');

		return (i); 
}
