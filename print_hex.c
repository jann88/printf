#include "main.h"
/**
 * print_hex_lower - a function that print lowercase hexadecimal
 * @x:the integer print
 * Return: zero on success
 */
int print_hex_lower(va_list x)
{
	int remainder;
	unsigned int num = va_arg(x, unsigned int);

	char hexNum[32];
	int count = 0, i = 0;

	do {
		remainder = num % 16;
		hexNum[i++] = (remainder < 10) ? (remainder + '0') :
			(remainder - 10 + 'a');
		num /= 16;
	} while (num != 0);

	while (--i >= 0)
	{
		_putchar(hexNum[i]);
		count++;
	}
	return (count);
}
/**
 * print_hex_upper - a function that print uppercase hexadecimal
 * @X:the integer print
 * Return: zero on success
 */
int print_hex_upper(va_list X, Flags flags)
{
	int remainder;
	unsigned int num = va_arg(X, unsigned int);

	char hexNum[32];
	int count = 0, i = 0;

	do {
		remainder = num % 16;
		hexNum[i++] = (remainder < 10) ? (remainder + '0') :
			(remainder - 10 + 'A');
		num /= 16;
	} while (num != 0);

	while (--i >= 0)
	{
		_putchar(hexNum[i]);
		count++;
	}
	return (count);
}
