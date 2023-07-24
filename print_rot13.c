#include "main.h"
/**
 * rot13 - function to apply rot13 transformation to char
 * @c:the char
 * Return: c
 */
char rot13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c - 13);
	return (c);
}
/**
 * print_rot13 - function that print rot13'ed string
 * @R:specifier
 * Return: rot13'ed string
 */
int print_rot13(va_list R)
{
	char *str;
	int i, count = 0;

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(rot13(str[i]));
		count++;
	}
	return (count);
}
