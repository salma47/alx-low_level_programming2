#include "main.h"

/**
 * _puts - print string with new line at the end
 *
 * @str: string
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
