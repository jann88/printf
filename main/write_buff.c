#include "main.h"
/**
 * write_buffer -a function that allows to call write
 * @buffer:pointer to char
 * @size:length of char
 * Return:zero on success
 */
int write_buffer(const char *buffer, int size)
{
	int twritten = 0;
	int written;

	while (twritten < size)
	{
		written = write(STDOUT_FILENO, buffer + twritten,
				size -twritten);
		if (written == -1)
			break;
	
		twritten += written;
	}
	return (twritten);
}
/**
 * int_to_string - a function that convert int to string
 * @num:the number
 * @buffer:the buffer pointer
 * @len:length pointer
 */
void int_to_string(unsigned int num, char *buffer, int *len)
{
	int i, temp_len;

	if (num == 0)
	{
		buffer[0] = '0';
		*len = 1;
		return;
	}
	temp_len = 0;
	while (num != 0)
	{
		buffer[temp_len++] = '0' + (num % 10);
		num /= 10;
	}
	for (i = 0; i < temp_len; i++)
		buffer[i] = buffer[temp_len - i - 1];
	*len = temp_len;
}
