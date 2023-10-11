#include"main.h"

/**
 * print_alphabet - uses the _putchar()
 * to print the alphabet from a to z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
