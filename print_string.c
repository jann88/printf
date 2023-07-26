#include "main.h"
/**
 * print_string - a funtion that print string
 * @s: string to print
 * Return: zero on success
 */
int print_string(va_list s)
{
	char *str;
	int i, count = 0;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
