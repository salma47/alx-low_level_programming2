#include "main.h"

/**
 *  _strlen - length of string
 *
 *  @s: the string
 *
 *  Return: length
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
