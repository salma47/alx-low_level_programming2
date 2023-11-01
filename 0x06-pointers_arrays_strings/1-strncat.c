#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to openupon
 * @src: string to complete
 * @n: integer to compare index
 * Return: the new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;

	while (dest[index++])
		length++;

	for (index = 0; src[index] && index < n; index++)
		dest[length++] = src[index];
	return (dest);
}
