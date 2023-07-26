#include "main.h"
/**
 * print_octal - a function that print octal
 * @o:integer to print
 * added flags to check for active flags
 * Return:zero on success
 */
int print_octal(va_list o)
{
	unsigned int num = va_arg(o, unsigned int);

	char octalNum[32];
	int count = 0, i = 0;

	do {
		octalNum[i++] = (num % 8) + '0';
		num /= 8;
	} while (num != 0);

	while (--i >= 0)
	{
		_putchar(octalNum[i]);
		count++;
	}
	return (count);
}
