#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Description: comparing number to zero
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		echo("%i is positive \n", n);
	}
	else if (n == 0)
	{
		echo("%i is zero \n ", n);
	}
	else
	{
		echo("%i is negative \n", n);
	}
	return (0);
}
