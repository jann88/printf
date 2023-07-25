#include "main.h"
/**
 * get_flags - calclutes acive flags
 * @format: formatted string in which to print arguements
 * @i: pointer to an int, used as input and output parameter
 * Return: flags
 */
int get_flags(const char *format, int *i)
{
	int j, index_i;
	int flags = 0;
	const char CH_FLAGS[] = {'+', ' ', '#'};
	const int ARR_FLAGS[] = {F_PLUS, F_SPACE, F_HASH,};
	
	for (index_i = *i + 1; format[index_i] != '\0'; index_i++)
	{
		for (j = 0; CH_FLAGS[j] != '\0'; j++)
		{
			if (format[index_i] == CH_FLAGS[j])
			{
				flags |= ARR_FLAGS[j];
				break;
			}
			if (CH_FLAGS[j] == 0)
				break;
		}
	}
	*i = index_i - 1;
	return (flags);
}
