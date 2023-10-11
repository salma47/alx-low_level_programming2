#include"main.h"

/**
 * _abs - determin the absolute value of
 * an integer
 *
 * @n: the input is an integer
 *
 * Return: 0 always sucess
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
