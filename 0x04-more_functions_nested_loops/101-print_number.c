#include"main.h"

/**
 * print_number - print intiger
 *
 * @n: the intiger to print
*/

void print_number(int n)
{
	unsigned int num = n;

	/*check if negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*divide digits*/
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
