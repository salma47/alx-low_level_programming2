#include"main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *
 * @n:  number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space <= pos; space++)
				_putchar(' ');
			_putchar(92);/* the '/' ascii*/
			_putchar('\n');
		}
	}
}
