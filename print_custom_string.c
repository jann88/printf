#include "main.h"
/**
 * print_custom_string - a function that handle custom conversion specifier
 * @S:custom specifier
 * Return: zero on success
 */
int print_custom_string(va_list S)
{
	char *str = va_arg(S, char *);
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			_printf("%X", (unsigned char)str[i]);
			count += 4;
		}
	}
	return (count);
}
