#include "main.h"

/**
 * *malloc_checked - reserve memory and exit in fail case
 * @b: int
 * Return: pointer or Null
 */

void *malloc_checked(unsigned int b)
{
	int *ma = malloc(b);

	if (ma == 0)
		exit(98);
	return (ma);
}
