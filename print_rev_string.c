#include "main.h"
/**
 * print_rev_string - A function that print reverse string
 * @r:string to reverse
 * Return:string reverse
 */
int print_rev_string(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")lin(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

