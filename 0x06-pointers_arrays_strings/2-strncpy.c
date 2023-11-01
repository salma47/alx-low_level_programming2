#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: stores the copy of the string
 * @src: source
 * @n: max of byte copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
