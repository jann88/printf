#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer to type char
 * takes non-constant(char*)
 * Return: value of c, length of the string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
/**
 * _strlenc - strlen function bt takes const char* pointer as its
 * arguement.
 * @s: pointer to type char
 * means it is a constant pointer to a character, function does
 * not modify contents of the string pointed by s
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
