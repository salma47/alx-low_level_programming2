#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of _
*/

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
