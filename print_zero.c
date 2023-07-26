#include "main.h"
/**
 * print_zero_dec - print zero padded when specify
 * @z: zeros to print
 * Return: success
 */
int print_zero_dec(va_list z)
{
	int num, divisor, digit, count = 0;
	int isNegative = 0;

	num = va_arg(z, int);
	if (num < 0)
	{
		_putchar('-');
		isNegative = 1;

		if (num == INT_MIN)
		{
			_putchar('2');
			num = -(num + 2000000000);
			count += 9;
		}
		else
		{
			num = -num;
		}
	}
	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count + isNegative);
}
