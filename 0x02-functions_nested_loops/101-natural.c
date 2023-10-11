#include"main.h"

/**
 * main - entry point
 *
 * Description: the sum of multiples 3 and 5
 *
 * Return: aways 0 sucess
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
