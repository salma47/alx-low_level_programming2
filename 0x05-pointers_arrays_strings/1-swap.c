#include "main.h"

/**
 * swap_int - swaps two vlues
 *
 * @a: first input
 * @b: second input
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
