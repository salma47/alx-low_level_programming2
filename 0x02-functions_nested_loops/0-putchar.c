#include "main.h"

/**
 * main - entry point
 *
 * Description: program that pritn putchar followed by new line
 *
 * Return: 0 always success
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
