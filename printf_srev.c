#include "main.h"
/**
 * printf_srev - a function that prints a str in reverse
 * @args: type struct va_arg of type va_list,
 * works with printf to handle variable arguements
 *
 * Return: value of the original string
 */
int printf_srev(va_list args)
{
	/*stores the string passed as an arguement to func va_arg*/
	char *s = va_arg(args, char*);
	int i;
	int j = 0; /*calculates the length of the string later*/

	/*check if the string is empty*/
	if (s == NULL)
	{
		s = "(null)";
	}
	/**
	 * calculate the length of the string,
	 * by counting char up to null terminator,
	 * store count in j
	 **/
	while (s[j] != '\0')
	{
		j++;
	}
	/*prints string in reverse from j-1*/
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		return (j);
	}
	return (i);
}
