#include "main.h"
/**
 * _pow - helper function of raise to power
 * @base: base number
 * @exp: exponential
 * Return: result
 */
int _pow(int base, int exp)
{
	int i, result = 1;

	for (1 = 0, i < exp; i++)
	{
		result *= base;
	}
	return (result);
}
/**
 * print_long_dec - print a decimal with 1 modifier
 * @d: number to print
 * Return: success
 */
int print_long_dec(va_list d)
{
	long int temp, num = va_arg(d,long int);
	int i, digit, num_digit, count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	num_digit = 0;
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		num_digit++;
	}
	for (i = num_digit - 1; i >= 0; i--)
	{
		digit = (num / _pow(10, i)) % 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
/**
 * print_ulong_dec - print unsigned dec num with l modifier
 * @u: the number
 * Return: success
 */
int print_ulong_dec(va_list u)
{
	unsigned long int temp, digit, num = va_arg(u, unsigned long int);
	int i, num_digit, count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	num_digit = 0;
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		num_digit++;
	}
	for (i = num_digit - 1; i > 0; i--)
	{
		digit = (num / _pow(10, i)) % 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
