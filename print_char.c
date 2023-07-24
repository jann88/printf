#include "main.h"
/**
 * print_char - a function that print character
 * @c: character to print
 * Return: Always success
 */
int print_char(va_list c)
{
	unsigned char a;

	a = va_arg(c, int);
	_putchar(a);

	return (1);
}
/**
 * print_percent - function that print percentage
 * @args:unused attribute
 * Return: Always success
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
