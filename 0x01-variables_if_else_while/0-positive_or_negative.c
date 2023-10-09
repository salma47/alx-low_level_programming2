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
		echo "is positive \n";
	}
	else if (n == 0)
	{
		echo "is zero \n ";
	}
	else
	{
		echo "is negative \n"
	}
	return (0);
}
