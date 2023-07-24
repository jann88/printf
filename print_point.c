#include "main.h"
/**
 * print_pointer - function that print pointer address
 * @p:the pointer
 * Return: zero on success
 */
int print_pointer(va_list p)
{
	uintptr_t address = (uintptr_t)va_arg(p, void *);
	uintptr_t temp;
	int i, hex_digit, num_digits;

	_putchar('0');
	_putchar('x');

	num_digits = 0;
	temp = address;
	do {
		temp >>= 4;
		num_digits++;
	} while (temp != 0);

	for (i = num_digits - 1; i >= 0; i--)
	{
		hex_digit = (address >> (i * 4)) & 0xF;
		_putchar(hex_digit < 10 ? hex_digit + '0' :
				hex_digit - 10 + 'a');
	}

	return (num_digits + 2);
}
