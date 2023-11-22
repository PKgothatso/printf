#include "main.h"
/**
 * print_i - Integer to be printed
 * @args: Argument to be printed
 * Return: Integer value.
 */
int print_i(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;

			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	putchar(last + '0');

	return (i);
}

/**
 * print_d - Decimal to be printed
 * @args: Argument to be printed
 * Return: Integer value
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;

			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	putchar(last + '0');

	return (i);
}
