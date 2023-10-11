#include"main.h"

/**
 * print_alphabet_x10 - use _putchar and
 * nested loop to write 10 time the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
